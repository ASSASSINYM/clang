// RUN: clang -fsyntax-only -verify %s

int i;
int a[] = {0};
struct { int i; } s;

int *array[] = {&i, a, &s.i};
