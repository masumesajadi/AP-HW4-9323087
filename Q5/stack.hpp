//Stack Destructor
template<class T>
Stack<T>::~Stack() {
  CItem* pTemp{};
  while(pTop)
  {
    pTemp = pTop;
    pTop = pTop->pNext;
    delete pTemp;
  }
}

//Stack Push Function
template<class T>
void Stack<T>::push(T pT) {
  pTop = new CItem(pT, pTop);
}

//Stack Pop Function
template<class T>
T Stack<T>::pop() {
  if(!pTop)
    return nullptr;
  T pT = pTop->pT;
  CItem* pTemp = pTop;
  pTop = pTop->pNext;
  delete pTemp;

  return pT;
}

//Stack getCount Function
template<class T>
int Stack<T>::getCount()
{
  int N{};
  CItem* pTemp = pTop;
  
  while(pTemp)
  {
    pTemp = pTemp->pNext;
    N++;
  }

  delete pTemp;
  
  return N;
}

//Stack isEmpty Function
template<class T>
bool Stack<T>::isEmpty() {
  return pTop == nullptr;
}
