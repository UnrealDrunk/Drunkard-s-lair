using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Microsoft.SmallBasic.Library;


namespace The_Turtle
{
    class Program
    {
        const int Dynamic = 40;
        const int Cycles = 3;
        static void Main(string[] args)
        {
            Turtle.Speed = 9;
            for(int i = 0; i < Cycles; i++)
            {
                Turtle.Move(Dynamic);
                Turtle.TurnRight();
                Turtle.Move(Dynamic);
                Turtle.TurnRight();
                Turtle.Move(Dynamic);
                Turtle.TurnLeft();
                Turtle.Move(Dynamic);
                Turtle.TurnLeft();
            }

            Turtle.Turn(180);
            Turtle.Move(Dynamic);
            Turtle.TurnRight();
            Turtle.Move(Dynamic * 11);
            for(int i =0; i < 7; i++)
            {
                Turtle.Turn(45);
                Turtle.Move(Dynamic*2.5);
            }         
        }
    }
}
