package com.pes.mca.FirstMaven;

import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;

/**
 * Hello world!
 *
 */
public class App 
{
    public static void main( String[] args )
    {
        System.out.println( "Hello World!" );
        ApplicationContext context = new ClassPathXmlApplicationContext("spring.xml");
//        Car c = new Car();
        Vehicle c = (Vehicle) context.getBean("vehicle");
        c.drive();
    }
}
