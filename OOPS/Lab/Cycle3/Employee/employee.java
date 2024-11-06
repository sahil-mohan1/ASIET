import java.util.*;

class employee {
    int age;
    long phone;
    String name, address;
    double salary;

    void printSal() {
        System.out.println("Salary: " + salary);
    }
}

class officer extends employee {
    String special;
}

class manager extends employee {
    String dep;
}

class print {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        
        officer a = new officer();
        manager b = new manager();

        System.out.println("Enter the Officer's details");
        System.out.println("Enter The Name:");
        a.name = s.nextLine();
        System.out.println("Enter the Age:");
        a.age = s.nextInt();
        s.nextLine(); // Consume the newline character
        System.out.println("Enter the address:");
        a.address = s.nextLine();
        System.out.println("Enter the phone number:");
        a.phone = s.nextLong();
        s.nextLine(); // Consume the newline character
        System.out.println("Enter the salary:");
        a.salary = s.nextDouble();
        s.nextLine(); // Consume the newline character
        System.out.println("Enter the Specialization:");
        a.special = s.nextLine();
        
        System.out.println("Enter the Manager's details");
        System.out.println("Enter The Name:");
        b.name = s.nextLine();
        System.out.println("Enter the Age:");
        b.age = s.nextInt();
        s.nextLine(); // Consume the newline character
        System.out.println("Enter the address:");
        b.address = s.nextLine();
        System.out.println("Enter the phone number:");
        b.phone = s.nextLong();
        s.nextLine(); // Consume the newline character
        System.out.println("Enter the salary:");
        b.salary = s.nextDouble();
        s.nextLine(); // Consume the newline character
        System.out.println("Enter the Department:");
        b.dep = s.nextLine();
        
        System.out.println("The details of the officer are:");
        System.out.println("Name:\t" + a.name);
        System.out.println("Age:\t" + a.age);
        System.out.println("Address:\t" + a.address);
        System.out.println("Phone number:\t" + a.phone);
        a.printSal();
        System.out.println("Specialization:\t" + a.special);

        System.out.println("The details of the Manager are:");
        System.out.println("Name:\t" + b.name);
        System.out.println("Age:\t" + b.age);
        System.out.println("Address:\t" + b.address);
        System.out.println("Phone number:\t" + b.phone);
        b.printSal();
        System.out.println("Department:\t" + b.dep);
    }
}

