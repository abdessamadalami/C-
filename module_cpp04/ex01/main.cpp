/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:31:33 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/16 18:48:18 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

 void test()
 {
        
        // Dog g;
        // Dog b(g);
//---------------------
        // Dog o;
        // {
        //         Dog p(o);
        //         // o = p;
        // }

//-----------------------------
        int a(2);
        // Dog b;
        // Dog c = b;
        if (a <= 0)
                return ;
        Animal** meta = new Animal*[a];
        for (int  i = 0; i < a; i++)
        {
                if (i < a/2)
                    meta[i] = new Dog();
                else
                    meta[i] = new Cat();
                meta[i]->makeSound();
        }
        std::cout << "\n";
        for(int i = 0; i < a; i++)
                delete meta[i];
        // delete[] meta;
       
 }
 
int main()
{
        test();
       // delete A;
       // exit(0);
       // delete []meta; 
        // system("leaks Polymorphism");
return 0;
}