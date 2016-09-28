using System;
using System.Collections.Generic;
using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace UnitTestProject1QA
{
    [TestClass]
    public class UnitTest1
    {
        [TestMethod]
        public void TestMethod1()
        {
            List<string> items = new List<string>();
                items.Add(Utilities.GenRandomString());
      
            Assert.AreEqual(1, items.Count);
           
        }
    }
}
