public class StrategyPatternDemo {
    public static void main(String[] args) {
        ShoppingCart cart = new ShoppingCart();

        // Pay by credit card
        cart.setPaymentStrategy(new CreditCardPayment("John Doe", "1234567890123456", "786", "12/15"));
        cart.checkout(100);

        // Pay by PayPal
        cart.setPaymentStrategy(new PayPalPayment("johndoe@example.com", "mypwd"));
        cart.checkout(200);
    }
}
