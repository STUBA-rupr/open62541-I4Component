using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;
using System.Xml.Linq;
using System.Xml.XPath;
using System.Reflection;

namespace InformationModelHelper
{
    class Program
    {
        static void Main(string[] args)
        {

           


            string nsName = "Nucleo-EnvSensor-AASX001";
            Stream stream = new FileStream(nsName + ".xml", FileMode.Open);
            Opc.Ua.Export.UANodeSet[] uaNodeSets;
            Opc.Ua.Export.UANodeSet uaNodeSet;


            #region validation
            Opc.Ua.Export.UANodeSet uaNodeSet2;
            Stream stream2 ;

            nsName = "c:/Projects/open62541-i4Component/examples/nodeset/Nucleo-EnvSensor-AASX001_part2";
            stream = new FileStream(nsName + ".xml", FileMode.Open);
            InformationModelHelper.LoadNodeSet(stream, out uaNodeSet);
            stream.Close();

            Opc.Ua.Export.UANode[] uaNodes =  uaNodeSet.Items.Where(i => i.NodeId == "ns=2;i=95").ToArray();
            Dictionary<string, Opc.Ua.Export.UANode> allusedNodes = new Dictionary<string, Opc.Ua.Export.UANode>();

            InformationModelHelper.UsedNodes(uaNodes, uaNodeSet, ref allusedNodes);

            /* add theese nodes 
6>Reference ns=2;i=162<--[ns=0;i=47]--ns=2;i=95 has an unknown target
6>Reference ns=2;i=183--[ns=0;i=17597]-->ns=2;i=340 has an unknown target
6>Reference ns=2;i=190--[ns=0;i=17597]-->ns=2;i=341 has an unknown target
6>Reference ns=2;i=197--[ns=0;i=17597]-->ns=2;i=342 has an unknown target
6>Reference ns=2;i=204--[ns=0;i=17597]-->ns=2;i=343 has an unknown target
6>Reference ns=2;i=211--[ns=0;i=17597]-->ns=2;i=344 has an unknown target
6>Reference ns=2;i=239--[ns=0;i=17597]-->ns=2;i=150 has an unknown target
6>Reference ns=2;i=246--[ns=0;i=17597]-->ns=2;i=345 has an unknown target
6>Reference ns=2;i=254--[ns=0;i=17597]-->ns=2;i=346 has an unknown target
6>Reference ns=2;i=260--[ns=0;i=17597]-->ns=2;i=347 has an unknown target
6>Reference ns=2;i=267--[ns=0;i=17597]-->ns=2;i=348 has an unknown target
6>Reference ns=2;i=274--[ns=0;i=17597]-->ns=2;i=349 has an unknown target
6>Reference ns=2;i=281--[ns=0;i=17597]-->ns=2;i=350 has an unknown target
6>Reference ns=2;i=287--[ns=0;i=17597]-->ns=2;i=351 has an unknown target
6>Reference ns=2;i=294--[ns=0;i=17597]-->ns=2;i=352 has an unknown target
6>Reference ns=2;i=301--[ns=0;i=17597]-->ns=2;i=353 has an unknown target
6>Reference ns=2;i=308--[ns=0;i=17597]-->ns=2;i=157 has an unknown target
6>Reference ns=2;i=319--[ns=0;i=17597]-->ns=2;i=99 has an unknown target
6>Reference ns=2;i=326--[ns=0;i=17597]-->ns=2;i=133 has an unknown target
6>Reference ns=2;i=333--[ns=0;i=17597]-->ns=2;i=116 has an unknown target
             */
            allusedNodes.Add("ns=2;i=95", null);
            allusedNodes.Add("ns=2;i=340", null);
            allusedNodes.Add("ns=2;i=341", null);
            allusedNodes.Add("ns=2;i=342", null);
            allusedNodes.Add("ns=2;i=343", null);
            allusedNodes.Add("ns=2;i=344", null);
            allusedNodes.Add("ns=2;i=150", null);
            allusedNodes.Add("ns=2;i=345", null);
            allusedNodes.Add("ns=2;i=346", null);
            allusedNodes.Add("ns=2;i=347", null);
            allusedNodes.Add("ns=2;i=348", null);
            allusedNodes.Add("ns=2;i=349", null);
            allusedNodes.Add("ns=2;i=350", null);
            allusedNodes.Add("ns=2;i=351", null);
            allusedNodes.Add("ns=2;i=352", null);
            allusedNodes.Add("ns=2;i=353", null);
            allusedNodes.Add("ns=2;i=157", null);
            allusedNodes.Add("ns=2;i=99", null);
            allusedNodes.Add("ns=2;i=133", null);
            allusedNodes.Add("ns=2;i=116", null);
            allusedNodes.Add("ns=2;i=109", null);
            allusedNodes.Add("ns=2;i=100", null);
            allusedNodes.Add("ns=2;i=111", null);
            allusedNodes.Add("ns=2;i=101", null);
            allusedNodes.Add("ns=2;i=97", null);
            allusedNodes.Add("ns=2;i=107", null);
            allusedNodes.Add("ns=2;i=104", null);
            allusedNodes.Add("ns=2;i=118", null);
            allusedNodes.Add("ns=2;i=121", null);
            allusedNodes.Add("ns=2;i=126", null);
            allusedNodes.Add("ns=2;i=128", null);
            allusedNodes.Add("ns=2;i=124", null);
            allusedNodes.Add("ns=2;i=117", null);
            allusedNodes.Add("ns=2;i=135", null);
            allusedNodes.Add("ns=2;i=145", null);
            allusedNodes.Add("ns=2;i=143", null);
            allusedNodes.Add("ns=2;i=134", null);
            allusedNodes.Add("ns=2;i=138", null);
            allusedNodes.Add("ns=2;i=141", null);
            allusedNodes.Add("ns=2;i=154", null);
            allusedNodes.Add("ns=2;i=151", null);
            allusedNodes.Add("ns=2;i=158", null);
            allusedNodes.Add("ns=2;i=159", null);
            allusedNodes.Add("ns=2;i=98", null);
            allusedNodes.Add("ns=2;i=96", null);
            allusedNodes.Add("ns=2;i=102", null);
            allusedNodes.Add("ns=2;i=103", null);
            allusedNodes.Add("ns=2;i=105", null);
            allusedNodes.Add("ns=2;i=106", null);
            allusedNodes.Add("ns=2;i=108", null);
            allusedNodes.Add("ns=2;i=110", null);
            allusedNodes.Add("ns=2;i=115", null);
            allusedNodes.Add("ns=2;i=113", null);
            allusedNodes.Add("ns=2;i=112", null);
            allusedNodes.Add("ns=2;i=114", null);
            allusedNodes.Add("ns=2;i=119", null);
            allusedNodes.Add("ns=2;i=120", null);
            allusedNodes.Add("ns=2;i=123", null);
            allusedNodes.Add("ns=2;i=122", null);
            allusedNodes.Add("ns=2;i=125", null);
            allusedNodes.Add("ns=2;i=127", null);
            allusedNodes.Add("ns=2;i=130", null);
            allusedNodes.Add("ns=2;i=131", null);
            allusedNodes.Add("ns=2;i=129", null);
            allusedNodes.Add("ns=2;i=132", null);
            allusedNodes.Add("ns=2;i=137", null);
            allusedNodes.Add("ns=2;i=136", null);
            allusedNodes.Add("ns=2;i=140", null);
            allusedNodes.Add("ns=2;i=139", null);
            allusedNodes.Add("ns=2;i=142", null);
            allusedNodes.Add("ns=2;i=144", null);
            allusedNodes.Add("ns=2;i=146", null);
            allusedNodes.Add("ns=2;i=148", null);
            allusedNodes.Add("ns=2;i=147", null);
            allusedNodes.Add("ns=2;i=149", null);
            allusedNodes.Add("ns=2;i=153", null);
            allusedNodes.Add("ns=2;i=152", null);
            allusedNodes.Add("ns=2;i=155", null);
            allusedNodes.Add("ns=2;i=156", null);
            allusedNodes.Add("ns=2;i=160", null);
            allusedNodes.Add("ns=2;i=161", null);



            // remove all which are not in allusedNodes            
            uaNodeSet.Items = uaNodeSet.Items.Where(i => allusedNodes.ContainsKey(i.NodeId)).ToArray();

            uaNodeSet.Write(new FileStream(nsName + "_reduced" + ".xml", FileMode.Create));


            return;


            nsName = "c:/Projects/open62541-i4Component/examples/nodeset/Nucleo-EnvSensor-AASX001_part2";
            stream2 = new FileStream(nsName + ".xml", FileMode.Open);
            InformationModelHelper.LoadNodeSet(stream2, out uaNodeSet2);
            stream2.Close();

            InformationModelHelper.ReduceNodeset(uaNodeSet, uaNodeSet2, 1);

            return;



            #endregion 


            InformationModelHelper.FixNodeSet2(ref stream);
            InformationModelHelper.SplitNodeSet2byNamespaces(stream, out uaNodeSets);

            // add reference OrganizedBy to AASROOT to point to Objects (ns=0;i=85)
            InformationModelHelper.AddReference(ref uaNodeSets[1],
                uaNodeSets[1].Items.First(i => i.BrowseName.EndsWith("AASROOT")).NodeId,
                "ns=0;i=85",
                InformationModelHelper.GetAliasValue("Organizes"),
                false,
                false);
            /*
            // add degC to temperature.value
            InformationModelHelper.AddReference(ref uaNodeSets[1],
                "ns=2;i=209",
                "ns=2;i=109",
                InformationModelHelper.GetAliasValue("HasComponent"), addReverse: true, isForward: true);

            // add hPa to pressure.value
            InformationModelHelper.AddReference(ref uaNodeSets[1],
                "ns=2;i=224",
                "ns=2;i=133",
                InformationModelHelper.GetAliasValue("HasComponent"), addReverse: true, isForward: true);

            // add % to humidity.value
            InformationModelHelper.AddReference(ref uaNodeSets[1],
                "ns=2;i=237",
                "ns=2;i=121",
                InformationModelHelper.GetAliasValue("HasComponent"), addReverse: true, isForward: true);
            */
            // replace DataType="ns=1;i=1" or DataType="ns=1;i=2" with String
            /*
            // Get the highest nodeid
            uint maxId = uaNodeSets[1].Items.Where(i => i.NodeId.Split(';')[0].Equals("ns=2")).Max(i => UInt32.Parse(i.NodeId.Split(';')[1].Split('=')[1]));

            // tempareture value range
            uaNodeSets[1].Items = uaNodeSets[1].Items.Concat(new[] { InformationModelHelper.CreateUAVariable_Range(2, ++maxId, "-40", "120") }).ToArray();
            InformationModelHelper.AddReference(ref uaNodeSets[1],
                dstNodeId: "ns=2;i=" + maxId.ToString(),
                srcNodeId: "ns=2;i=209",
                refType: InformationModelHelper.GetAliasValue("HasComponent"), addReverse: true, isForward: true);

            // pressure.value range
            uaNodeSets[1].Items = uaNodeSets[1].Items.Concat(new[] { InformationModelHelper.CreateUAVariable_Range(2, ++maxId, "260", "1260") }).ToArray();
            InformationModelHelper.AddReference(ref uaNodeSets[1],
                dstNodeId: "ns=2;i=" + maxId.ToString(), 
                srcNodeId: "ns=2;i=224",
                refType: InformationModelHelper.GetAliasValue("HasComponent"), addReverse: true, isForward: true);

            // humidity.value range
            uaNodeSets[1].Items = uaNodeSets[1].Items.Concat(new[] { InformationModelHelper.CreateUAVariable_Range(2, ++maxId, "0", "100") }).ToArray();
            InformationModelHelper.AddReference(ref uaNodeSets[1],
                dstNodeId: "ns=2;i=" + maxId.ToString(),
                srcNodeId: "ns=2;i=237",
                refType: InformationModelHelper.GetAliasValue("HasComponent"), addReverse: true, isForward: true);
            */

            //            return;


            for (int ii = 0; ii < uaNodeSets.Count(); ii++)
            {
                // save NS
                using (Stream file = File.Create("../../" + nsName + "_part" + (ii + 1) + ".xml"))
                {
                    uaNodeSets[ii].Write(file);                    
                    file.Close();
                }

                // save CSV
                InformationModelHelper.GenerateNodeIdCSV(uaNodeSets[ii], out stream);

                using (FileStream file = File.Create("../../" + nsName + "_part" + (ii + 1) + ".csv"))
                {
                    stream.Position = 0;
                    stream.CopyTo(file);
                    file.Close();
                }


            }
            
        }
    }
}
