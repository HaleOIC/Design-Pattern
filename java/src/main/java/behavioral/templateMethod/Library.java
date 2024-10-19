package behavioral.templateMethod;

public abstract class Library {
    // we have stable part of the whole algorithm in the Library class 
    private void step1() {
        System.out.println("Library step1(stable part)");
    }

    private void step3() {
        System.out.println("Library step3(stable part)");
    }

    private void step5() {
        System.out.println("Library step5(stable part)");
    }
    
    // abstract methods that should be implemented by the subclasses
    // unstable part of the whole framework
    // should be implemented by the derived classes
    protected abstract boolean step2();
    protected abstract void step4();

    // stable framework methods
    void run() {
        step1();

        if (step2()) {
            step3();
        }

        for (int i = 0; i < 4; i++) {
            step4();
        }
        step5();
    }
}