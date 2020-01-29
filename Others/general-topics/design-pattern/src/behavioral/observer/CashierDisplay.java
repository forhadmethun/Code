package behavioral.observer;

public class CashierDisplay extends Observer {
    @Override
    public void update(String str) {
        System.out.println("[Cashier Display] : " + str);
    }
}
