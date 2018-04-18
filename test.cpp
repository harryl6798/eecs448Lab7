#include "test.h"

test::test()
{
  
}

void test::run(){
  std::cout<< "----------------------------------------------------------------------------\n";
  std::cout<< " Prepare yourself Bugs, the exterminator is here. MWAHAHAHAHA\n";
  std::cout<< "----------------------------------------------------------------------------\n";

  emptyList();
  isEmpty();
  isNotEmpty();
  addFront();
  addBack();
  search();
  search2();
  removeBack();
  removeFront();
  sizeaddFront();
  sizeaddBack();
  sizeremoveBack();
  sizeremoveFront();
  
}


void test::emptyList()
{
  LinkedListOfInts List;
     if(List.size() == 0){
         std::cout << "Test Empty List: PASSED (Size is Zero)\n";
     } else{
         std::cout << "Test Empty List: Failed (Size isn't Zero)\n";
     }
}
void test::isEmpty()
{
  LinkedListOfInts List;

     if(List.isEmpty()){
         std::cout << "Test Empty List: PASSED (isEmpty returns true)\n";
     } else{
         std::cout << "Test Empty List: Failed (isEmpty returns true)\n";
     }
}
void test::isNotEmpty()
{
  LinkedListOfInts List;
  List.addFront(2);
     if(List.isEmpty()){
         std::cout << "Test NOT Empty List: PASSED (isEmpty returns true)\n";
     } else{
         std::cout << "Test NOT Empty List: Failed (isEmpty returns true)\n";
     }
}
void test::addFront()
{
  LinkedListOfInts List;
  List.addFront(2);
  List.addFront(3);
  List.addFront(5);
  std::vector<int> theVector = List.toVector();
  if(theVector.front()==5)
  {
    std::cout << "Test Add Front: PASSED (Correct Front Value))\n";
 } else{
    std::cout << "Test Add Front: FAILED (Incorrect Front Value))\n";
 }
}
void test::addBack()
{
  LinkedListOfInts List;
  List.addBack(109);
  List.addBack(3);
  std::vector<int> theVector = List.toVector();
  if(theVector.back()==3)
  {
    std::cout << "Test Add Back: PASSED (Correct Front Value))\n";
 } else{
    std::cout << "Test Add Back: FAILED (Incorrect Front Value))\n";
  
 }
}
void test::search()
{
  LinkedListOfInts List;
  List.addFront(2);
  List.addFront(3);
  List.addFront(9);
  bool foundSearch = List.search(3);
  bool foundVector = false;
  std::vector<int> theVector = List.toVector();
  if(theVector.at(1)==3)
  {
      foundVector=true;
  }
  if(foundSearch==true && foundVector==true)
  {
    std::cout << "Test Search: PASSED (Correct Front Value))\n";
 } else{
    std::cout << "Test Search: FAILED (Incorrect Front Value))\n";
 }
}
void test::search2()
{
  LinkedListOfInts List;
  List.addFront(2);
  List.addFront(3);
  List.addFront(9);
  bool foundSearch = List.search(9045);

  bool foundVector = false;
  std::vector<int> theVector = List.toVector();
  if(theVector.at(1)==3)
  {
      foundVector=true;
  }
  if(foundSearch==true && foundVector==true)
  {
    std::cout << "Test Search: FAILED (In list))\n";
 } else{
    std::cout << "Test Search Not In Array: Passed (Not in List))\n";
 }
}

void test::removeBack()
{
  LinkedListOfInts List;

  List.addBack(69);
  List.addBack(90);
  List.addBack(420);
    std::vector<int> theVector = List.toVector();

  List.removeBack();
  
  if(theVector.back() == 90)
  {
    std::cout << "Test RemoveBack: PASSED (Correct Back Value))\n";
    } else{
    std::cout << "Test Remove Back: FAILED (Incorrect Back Value))\n";

    }
    LinkedListOfInts List2;

    if(List2.removeBack())
    {
      std::cout << "Test RemoveBack: FAILED (Remove Back when Nothing exists))\n";
    }
  
}
void test::removeFront()
{
  LinkedListOfInts List;
  List.addFront(69);
  List.addFront(420);

  std::vector<int> theVector = List.toVector();

    List.removeFront();
  if(theVector.front() == 69)
  {
    std::cout << "Test RemoveFront: PASSED (Correct Front Value))WOW\n";
    } else{
    std::cout << "Test RemoveFront: FAILED (Incorrect Front Value))\n";
  
    }
    LinkedListOfInts List2;

    if(List2.removeFront())
    {
      std::cout << "Test RemoveFront: FAILED (Remove Front when Nothing exists))\n";
    }
}
void test::sizeaddFront()
{
  LinkedListOfInts List;
  List.addFront(2);
     if(List.size()==1){
         std::cout << "Test Add Front: PASSED (Size is 1)\n";
     } else{
         std::cout << "Test Add Front: Failed (Size is 0)\n";
     }
}
void test::sizeaddBack()
{
  LinkedListOfInts List;
  List.addBack(2);
  List.addBack(3);

  if(List.size()==2)
  {
    std::cout << "Test Add Back: PASSED (Size is 2))\n";
 } else{
    std::cout << "Test Add Back: FAILED (Size is 2)))\n";
 }
}
void test::sizeremoveBack()
{
  LinkedListOfInts List;
  List.addBack(69);
  List.addBack(420);
  List.removeBack();
  if(List.size() == 1)
  {
     std::cout << "Test Remove Back: PASSED (Size is 1)\n";
  }
  else{
      std::cout << "Test Remove Back: FAILED (Size is not 1)\n";
  }
}
void test::sizeremoveFront()
{
  LinkedListOfInts List;
  List.addBack(69);
  List.addBack(420);
  List.removeFront();
  if(List.size() == 1)
  {
     std::cout << "Test Remove Front: PASSED (Size is 1)\n";
  }
  else{
      std::cout << "Test Remove Front: FAILED (Size is not 1)\n";
  }
}