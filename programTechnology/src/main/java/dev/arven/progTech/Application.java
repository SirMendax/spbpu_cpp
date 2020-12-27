package dev.arven.progTech;

import java.util.Map;
import java.util.Scanner;

public class Application {
  public static void main(String[] args) {
    if(args.length > 0){
      Application.start(Integer.parseInt(args[0]));
    }else{
      Application.start(15);
    }
  }
  private static void start(int num){
    try{
      InputService in = new InputService(new Scanner(System.in));
      PrintService printService = new PrintService();
      DataAccessObject data = in.createData();
      EquationService equationService = new EquationService(data, num);
      Map<Double, Double> result = equationService.equation();
      printService.print(result);
    }catch (Exception e){
      System.out.println(e.getMessage());
    }
  }
}
