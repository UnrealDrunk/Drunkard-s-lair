using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FilmAdvisor
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Добрый вечер! Предлагаем Вам провести нескучно вечер за подборочкой неплохого кино!");
            Console.WriteLine("Как вас зовут?");
            string Name = Console.ReadLine();
            Console.WriteLine(Name + ", фильмы каких жанров Вы предпочитаете?");
            string Genre = Console.ReadLine();

            if(Genre == "боевик")
            {
                Console.ForegroundColor = ConsoleColor.Green;
                Console.WriteLine("Мы оподобрали для вас следующую подборочку нескучного кино:");
                Console.WriteLine("1. Неудержимые");
                Console.WriteLine("2. Рэмбо");
                Console.WriteLine("3. Терминатор");
            }
            else if(Genre == "комедия")
            {
                Console.ForegroundColor = ConsoleColor.Yellow;
                Console.WriteLine("Мы оподобрали для вас следующую подборочку нескучного кино:");
                Console.WriteLine("1. Маска");
                Console.WriteLine("2. Не грози Южному Централу");
                Console.WriteLine("3. Борат");
            }
            else if(Genre == "эротика")
            {
                
                Console.WriteLine("Сколько вам лет?");
                string YearString = Console.ReadLine();
                int Years = Int32.Parse(YearString);
                if (Years < 18)
                {
                    Console.WriteLine("К сожалению вы еще не достигли нужного возраста");
                    string YearCounter = "";
                    if ((18 - Years) == 1)
                        YearCounter = "год";
                    else if ((18 - Years) > 1 && (18 - Years) < 5)
                        YearCounter = "года";
                    else
                        YearCounter = "лет";

                    Console.WriteLine("можете врентуться к этому выбору через " + (18 - Years) + " " + YearCounter);
                }
                else
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("Вот что Вас точно не оставит равнодушным:");
                    Console.WriteLine("1. Саша Грей и её друзья");
                    Console.WriteLine("2. Саша Грей и жёлтая Лада Калина");
                    Console.WriteLine("3. Саша Грей и её друзья, которые пригласили ещё больше друзей");
                }
            }
            else
            {
                Console.ForegroundColor = ConsoleColor.DarkCyan;
                Console.WriteLine("К сожалению мы ничего не сможем вам предложить, у нас только боевики, комедии и эротика");
            }
            Console.ReadLine();
        }

    }
}
