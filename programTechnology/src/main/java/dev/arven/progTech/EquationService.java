package dev.arven.progTech;

import java.util.HashMap;
import java.util.Map;

final public class EquationService {
  private final DataAccessObject data;
  private final int num;
  public EquationService(DataAccessObject data, int num) {
    this.data = data;
    this.num = num;
  }
  public Map<Double, Double> equation(){
    Map<Double, Double> result = new HashMap<>();
    Double x, stop, step;
    if(this.data.getVarA() > this.data.getVarB()){
      x = data.getVarB();
      stop = data.getVarA();
    }else{
      stop = data.getVarB();
      x = data.getVarA();
    }

    if(this.data.getDelta() > 0){
      step = this.data.getDelta();
    }else{
      step = -this.data.getDelta();
    }

    result.put(stop, calculateFunction(stop));
    while(x < stop){
      result.put(x, calculateFunction(x));
      x += step;
    }
    return result;
  }

  private Double calculateFunction(Double x){
    if(this.num % 2 == 0){
      return max(leftFunction(x), rightFunction(x));
    }else{
      return min(leftFunction(x), rightFunction(x));
    }
  }

  private Double leftFunction(Double x){
    if(this.num % 2 == 0){
      return Math.log((1-num)/(Math.sin(x+num)));
    }else{
      return Math.log((1-num)/(Math.cos(x-num)));
    }
  }

  private Double rightFunction(Double x){
    if(this.num % 2 == 0){
      return Math.abs((1/Math.tan(x))/num);
    }else{
      return Math.tan(x)/num;
    }
  }

  private Double min(Double x1, Double x2){
    return x1 > x2 ? x2 : x1;
  }
  private Double max(Double x1, Double x2){
    return x1 > x2 ? x1 : x2;
  }
}
