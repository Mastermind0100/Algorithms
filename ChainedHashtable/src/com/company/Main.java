package com.company;

public class Main {

    public static void main(String[] args) {
	// write your code here
        Employee janeJones = new Employee("Jane","Jones",123);
        Employee johnDoe = new Employee("John","Doe",4567);
        Employee marySmith = new Employee("Mary","Smith",22);
        Employee mikeWilson = new Employee("Mike","Wilson",123);

        ChainedHashTable ht = new ChainedHashTable();
        ht.put("Jones",janeJones);
        ht.put("Doe",johnDoe);
        ht.put("Smith",marySmith);
        ht.put("Wilson",mikeWilson);

        //ht.print();
        System.out.println(ht.get("Smith"));

        ht.remove("Jones");
        ht.print();
    }
}
