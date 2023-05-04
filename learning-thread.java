public class Print {
  char c1, c2, c3;
  
  private int point = 100;
  private int flag = 1;

  public Print(char c1, char c2, char c3){
    this.c1 = c1;
    this.c2 = c2;
    this.c3 = c3;
  }


  public void run() throws InterruptedException {
    Thread thread1 = new Thread(new Runnable() {
      @Override
      public void run() {

        for (int i = 0; i<point; i++){
          while (flag != 1){
            Thread.yield();
          }
          System.out.print(c1);
          
          try{
            Thread.sleep(200);
          } catch(InterruptedException e) {
            e.printStackTrace();
          }
          flag = 2;

        }
      }
    });

    Thread thread2 = new Thread(new Runnable() {
      @Override
      public void run() {

          for (int i = 0; i < point; i++) {
            while (flag != 2){
              Thread.yield();
            }
          
            System.out.print(c2);

            try {
                Thread.sleep(200);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
            flag = 3;
        }
      }
  });

  Thread thread3 = new Thread(new Runnable() {
    @Override
    public void run() {
        
      for (int i = 0; i < point; i++) {
        while (flag != 3){
          Thread.yield();
        }

        System.out.println(c3);

        try {
          Thread.sleep(200);
        } catch (InterruptedException e) {
          e.printStackTrace();
        }
        flag = 1;
      }
    }
});

    thread1.start();
    thread2.start();
    thread3.start();

  
  }
}
