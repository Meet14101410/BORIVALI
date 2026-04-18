public class BorivaliInfo {
    private final String name = "Borivali";
    private final String category = "Residential & Commercial Hub";
    private final boolean hasNationalPark = true;

    public void displayStats() {
        System.out.println("Identity Profile: " + name);
        System.out.println("----------------------------");
        System.out.println("Classification: " + category);
        System.out.println("Has Forest Reserve: " + (hasNationalPark ? "Yes (SGNP)" : "No"));
        System.out.println("Connectivity: Major Express Train Stop");
    }

    public static void main(String[] args) {
        new BorivaliInfo().displayStats();
    }
}
