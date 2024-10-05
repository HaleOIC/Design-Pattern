public class Application extends Library {
    // unstable part of the whole framework
    protected boolean step2() {
        System.out.println("Application step2(unstable part)");
        return true;
    }

    protected void step4() {
        System.out.println("Application step4(unstable part)");
    }

    public static void main(String[] args) {
        new Application().run();
    }    
}
