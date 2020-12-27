package dev.arven.progTech;

final public class DataAccessObject {
  private final Double varA, varB, delta;

  public DataAccessObject(Double varA, Double varB, Double delta) {
    this.varA = varA;
    this.varB = varB;
    this.delta = delta;
  }

  public Double getVarA() {
    return varA;
  }

  public Double getVarB() {
    return varB;
  }

  public Double getDelta() {
    return delta;
  }
}
