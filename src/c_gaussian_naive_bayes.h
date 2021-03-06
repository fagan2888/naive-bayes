#ifndef C_GAUSSIAN_NAIVE_BAYES_
#define C_GAUSSIAN_NAIVE_BAYES_

#include <gsl/gsl_randist.h>
#include <gsl/gsl_statistics_double.h>

typedef struct _gnb_classifier gnb_classifier;

gnb_classifier * new_gnb_classifier(long int fac, long int dim);

int free_gnb_classifier(gnb_classifier *clf);

int gnb_train(gnb_classifier *clf, double *X, long int *y, long int pop);

int gnb_classify(gnb_classifier *clf, double *X, long int *y, long int N);

#endif // C_GAUSSIAN_NAIVE_BAYES_
