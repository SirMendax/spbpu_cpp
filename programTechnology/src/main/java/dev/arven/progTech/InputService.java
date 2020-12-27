package dev.arven.progTech;

import java.util.Scanner;

final public class InputService {
  private final Scanner in;
  public InputService(Scanner in) {
    this.in = in;
  }
  public DataAccessObject createData() throws Exception{
    Double _a, _b, _d;

    while(true){
      _a = inputDoubleValue("Please enter the left border of the interval X");
      _b = inputDoubleValue("Please enter the right border of the interval X");
      if(_a.equals(_b)){
        System.out.println("The interval X should not be empty");
      }else{
        break;
      }
    }

    while(true){
      _d = inputDoubleValue("Please enter step for interval");
      if(_d.equals((double)0)){
        System.out.println("The step must not be zero");
      }else{
        break;
      }
    }

    this.in.close();

    return new DataAccessObject(_a, _b, _d);
  }
  private Double inputDoubleValue(String message){
    System.out.println(message);
    while (!in.hasNextDouble()) {
      System.out.println("That not a number");
      in.next();
    }
    return in.nextDouble();
  }
}
