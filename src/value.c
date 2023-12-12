#include <stdio.h>

#include "include/memory.h"
#include "include/value.h"

void initValueArray(ValueArray* array) {
  array->values = NULL;
  array->capacity = 0;
  array->count = 0;
}

void writeValueArray(ValueArray* array, Value value) {
  // If the array is full, double its capacity
  if (array->capacity < array->count + 1) {
    int oldCapacity = array->capacity;
    // Double the capacity
    array->capacity = GROW_CAPACITY(oldCapacity);
    // Reallocate the array
    array->values = GROW_ARRAY(Value, array->values, oldCapacity, array->capacity);
  }

  // Write the value to the array
  array->values[array->count] = value;
  array->count++;
}

void freeValueArray(ValueArray* array) {
  // Free the array
  FREE_ARRAY(Value, array->values, array->capacity);
  // Reset the array
  initValueArray(array);
}

void printValue(Value value) {
  printf("%g", value);
}

