/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgu <hgu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:48:35 by hgu               #+#    #+#             */
/*   Updated: 2024/02/28 14:49:30 by hgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

/*
어떤 경우에 Weapon을 가리키는 포인터를 사용하는 것이 좋을까요?
-> HumanB의 경우 생성자에 Weapon이 없으므로 포인터변수로 Weapon을 지니고 있는것이 좋다
그리고 Weapon을 참조하는 것이 좋을까요?
-> HumanA의 경우 생성자가 Weapon을 지니므로 생성과 동시에 초기화리스트를 이용한 레퍼런스변수로 초기화가 가능하다
이유는 무엇일까요? 이 과제를 시작하기 전에 생각해보세요.
-> 참조자는 외부의 변수를 지칭하는 또 다른 이름이므로 포인터와 유사하게 이용이 가능하다
-> 참조자는 선언과 동시에 NULL이 아닌 값으로 초기화되어야 하므로 생성자에 parameter가 존재하는 경우만 이용가능하다
-> 포인터는 나중에 들어온 변수로도 설정가능
*/

int main()
{
  {
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
  }
  {
    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
  }
  return 0;
}