# Simple Linear Regression

1. Abstraction 
2. Modelling 
3. Implementation with C++

## Abstraction and Modelling

@startuml
class DataSet {
   x:float[]
   y:float[]
   DataSet()
   getX():float[]
   gety():float[]
}

class SimpleLinearRegresion{
   beta0:float   
   beta1:float
   SimpleLinearRegression()
   toComputeB0();float
   toComputeB1();float
   printRegEquation():void
   toPredict(x:float):void
}

class DiscreteMaths{
   DiscreteMaths()
   sumX(float[] x);float
   sumY(float[] y);float
   sumQuadX(float[] x);float
   sumXY(float[]x, float[] y);float
   sumXsumY(float[] x, float[] y);float
}
@enduml


## Regression Equation

$$y= \beta_0 + \beta_1 x$$

$$sales= \beta_0 + \beta_1 advertising$$

## Simple Linear Regression for Predictive Analysis

$\Large{\beta_0 = \frac{ \sum\limits_{i = 1}^n y_i -  \beta_1 \sum\limits_{i = 1}^n x_i }{n}}$


$\Large{\beta_1 = \frac{ n  \sum\limits_{i = 1}^n x_i y_i -\sum\limits_{i = 1}^n x_i \sum\limits_{i = 1}^n y_i } {n \sum\limits_{i = 1}^n x^2_i -
\sum\limits_{i = 1}^n x_i  \sum\limits_{i = 1}^n x_i}}$

