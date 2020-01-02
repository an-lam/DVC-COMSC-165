// step 1
  Student* temp = new Student; // create a node

  // step 2
  temp->name = ... // populate all of its attributes...
  temp->gpa = ... // ...by cin or fin or other means...
  temp->age = ... // ...except the next pointer -- leave that uninitialized
  
  // step 3: no tie breaker
  Student* p, *prev; // step 4 will need to know the "previous node"
  for (p = firstStudent, prev = 0; p; prev = p, p = p->next)
    if (temp->gpa < p->gpa) break;

  // step 4
  temp->next = p; // places the node at p after the new node -- works even if p is zero
  if (prev) prev->next = temp; // places the new node after the node at prev, if there is one...
  else firstStudent = temp; // ...or makes it the new head if prev is zero
  if (p == 0) lastStudent = temp; // in case there's a tail pointer
  
   // step 3 -- with one tie breaker
  Student* p, *prev; // step 4 will need to know the "previous node"
  for (p = firstStudent, prev = 0; p; prev = p, p = p->next)
  {
    if (temp->gpa < p->gpa) break;
    if (temp->gpa > p->gpa) continue; // else equal, so go to the tie-breaker
    if (temp->name < p->name) break; // tie-breaker -- gpa's must be equal
  }
  
  
   // step 3 -- with one tie breaker
  Student* p, *prev; // step 4 will need to know the "previous node"
  for (p = firstStudent, prev = 0; p; prev = p, p = p->next)
    if (compareStudents(temp, p) < 0) break;
  
  
int compareStudents(Student* a, Student* b)
{
  if (a->gpa < b->gpa) return -1;
  if (a->gpa > b->gpa) return 1;

  // first tie breaker, lo-to-hi
  if (a->name < b->name) return -1;
  if (a->name > b->name) return 1;

  // second tie breaker, hi-to-lo
  if (a->age < b->age) return 1; // reverse sign for hi-to-lo
  if (a->age > b->age) return -1;

  // it's a tie
  return 0;
}