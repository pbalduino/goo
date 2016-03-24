#pragma once
namespace Goo {

   template<class T>
   struct ListItem {
      T         value;
      ListItem* next;
   };
 
   template<class T>
   class List {
   private:
      unsigned int _size;
      T     _value;
      List* _next;

   public:
      List() : 
         _head( nullptr ),
         _next( nullptr ),
         _size( 0 ) {
#ifdef GOO_DEBUG
         std::cout << "Creating empty list" << std::endl;
#endif
      };

      List add(T value) {

         return new List<T>( value, _head );
      }

      unsigned long size() {
         return _size;
      }

      bool empty() {
         return _size == 0;
      }

      virtual ~List() {
#ifdef GOO_DEBUG
         std::cout << "Cleaning" << std::endl;
#endif
      }
   };

}