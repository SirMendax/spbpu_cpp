package dev.arven.progTech;

import dnl.utils.text.table.TextTable;

import java.util.Arrays;
import java.util.Map;

final public class PrintService {
  public void print(Map<Double, Double> result){
    String[] columnNames = {"X", "Y"};
    Object[][] data = new Object[result.size()][];
    Object[] keys = result.keySet().toArray();
    Arrays.sort(keys);
    int i = 0;
    for (Object key : keys) {
      data[i] = new Object[]{key, (result.get(key).isNaN() ? "error" : result.get(key))};
      i++;
    }
    TextTable tt = new TextTable(columnNames, data);
    tt.printTable();
  }
}
