using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.Remoting.Messaging;
using System.Text;
using System.Threading.Tasks;

namespace UnitTestProject1QA
{
    class Utilities
    {
        public static string GenRandomString()
        {
            Random rnd = new Random();
            int l = rnd.Next(1, 20);
            string ret = "";
            for (int i = 0; i < l; i++)
            {
                ret = ret + "A" + (char) rnd.Next(26);
            }

            return ret;
        }
    }
}
