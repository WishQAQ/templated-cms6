<?php
$z[0]=Array("field","",62,81);
$z[0][4]['name']="title";
$z[1]=Array("global","",82,108);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",149,178);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",218,276);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("global","",586,618);
$z[4][4]['name']="cfg_templets_skin";
$z[5]=Array("global","",664,696);
$z[5][4]['name']="cfg_templets_skin";
$z[6]=Array("global","",762,794);
$z[6][4]['name']="cfg_templets_skin";
$z[7]=Array("global","",895,927);
$z[7][4]['name']="cfg_templets_skin";
$z[8]=Array("global","",1273,1305);
$z[8][4]['name']="cfg_templets_skin";
$z[9]=Array("global","",1387,1419);
$z[9][4]['name']="cfg_templets_skin";
$z[10]=Array("global","",1497,1529);
$z[10][4]['name']="cfg_templets_skin";
$z[11]=Array("global","",1605,1637);
$z[11][4]['name']="cfg_templets_skin";
$z[12]=Array("global","",1710,1742);
$z[12][4]['name']="cfg_templets_skin";
$z[13]=Array("include","",1791,1826);
$z[13][4]['filename']="head.htm";
$z[14]=Array("field","\$ID = @me; \$sql = \"SELECT * FROM `dede_arctype` WHERE id=\$ID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); \$relID = \"\$row[reid]\"; if(\$relID == 0) {@me = \$row[typename];}else{\$sql = \"SELECT `typename` FROM `dede_arctype` WHERE id=\$relID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); @me = \$row[typename];}",2201,2585);
$z[14][4]['name']="typeid";
$z[14][4]['runphp']="yes";
$z[15]=Array("channelartlist","\r\n                        <li {dede:field name='currentstyle'/}>\r\n                        	<a href=\"{dede:field name='typeurl'/}\" target=\"\">{dede:field name='typename'/}</a>\r\n                        </li>\r\n                       ",2930,3237);
$z[15][4]['type']="son";
$z[15][4]['noself']="yes";
$z[15][4]['typeid']="2";
$z[16]=Array("type","[field:typename /]",3450,3502);
$z[16][4]['typeid']="4";
$z[17]=Array("field","",3517,3539);
$z[17][4]['name']="typename";
$z[18]=Array("field","",3650,3679);
$z[18][4]['name']="position";
$z[19]=Array("list","\r\n                    <li class='hover' data-animate=\"fadeInUp\" data-delay=\"[field:autoindex runphp='yes']@me=\$GLOBALS['autoindex'];[/field:autoindex]00\">\r\n                    	<a href=\"[field:arcurl/]\" >\r\n		                    <div class=\"img-box\">\r\n		                        <img src=\"[field:litpic/]\">\r\n		                        <p>[field:title/]</p>\r\n		                    </div>\r\n		                </a>\r\n					</li>\r\n			",3759,4233);
$z[19][4]['pagesize']="4";
$z[19][4]['titlelen']="50";
$z[20]=Array("pagelist","",4378,4444);
$z[20][4]['listitem']="index,end,pre,next,pageno";
$z[20][4]['listsize']="5";
$z[21]=Array("include","",4497,4534);
$z[21][4]['filename']="footer.htm";

?>