<?php
$z[0]=Array("field","",59,78);
$z[0][4]['name']="title";
$z[1]=Array("global","",79,105);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",146,168);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",208,259);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("global","",669,701);
$z[4][4]['name']="cfg_templets_skin";
$z[5]=Array("global","",747,779);
$z[5][4]['name']="cfg_templets_skin";
$z[6]=Array("global","",922,954);
$z[6][4]['name']="cfg_templets_skin";
$z[7]=Array("global","",1055,1087);
$z[7][4]['name']="cfg_templets_skin";
$z[8]=Array("global","",1433,1465);
$z[8][4]['name']="cfg_templets_skin";
$z[9]=Array("global","",1547,1579);
$z[9][4]['name']="cfg_templets_skin";
$z[10]=Array("global","",1657,1689);
$z[10][4]['name']="cfg_templets_skin";
$z[11]=Array("global","",1765,1797);
$z[11][4]['name']="cfg_templets_skin";
$z[12]=Array("global","",1870,1902);
$z[12][4]['name']="cfg_templets_skin";
$z[13]=Array("include","",1951,1986);
$z[13][4]['filename']="head.htm";
$z[14]=Array("field","\$ID = @me; \$sql = \"SELECT * FROM `dede_arctype` WHERE id=\$ID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); \$relID = \"\$row[reid]\"; if(\$relID == 0) {@me = \$row[typename];}else{\$sql = \"SELECT `typename` FROM `dede_arctype` WHERE id=\$relID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); @me = \$row[typename];}",2117,2501);
$z[14][4]['name']="typeid";
$z[14][4]['runphp']="yes";
$z[15]=Array("channelartlist","\r\n                        <li {dede:field name='currentstyle'/}>\r\n                        	<a href=\"{dede:field name='typeurl'/}\" target=\"\">{dede:field name='typename'/}</a>\r\n                        </li>\r\n                    ",2585,2889);
$z[15][4]['type']="son";
$z[15][4]['noself']="yes";
$z[15][4]['typeid']="2";
$z[16]=Array("type","[field:typename /]",3102,3154);
$z[16][4]['typeid']="4";
$z[17]=Array("field","",3169,3191);
$z[17][4]['name']="typename";
$z[18]=Array("field","",3321,3350);
$z[18][4]['name']="position";
$z[19]=Array("field","",3535,3561);
$z[19][4]['name']="image";
$z[20]=Array("global","",3922,3954);
$z[20][4]['name']="cfg_templets_skin";
$z[21]=Array("global","",4030,4062);
$z[21][4]['name']="cfg_templets_skin";
$z[22]=Array("global","",4132,4164);
$z[22][4]['name']="cfg_templets_skin";
$z[23]=Array("global","",4234,4266);
$z[23][4]['name']="cfg_templets_skin";
$z[24]=Array("global","",4336,4368);
$z[24][4]['name']="cfg_templets_skin";
$z[25]=Array("global","",4438,4470);
$z[25][4]['name']="cfg_templets_skin";
$z[26]=Array("global","",4546,4578);
$z[26][4]['name']="cfg_templets_skin";
$z[27]=Array("field","",5109,5127);
$z[27][4]['name']="body";
$z[28]=Array("pagelist","",5357,5423);
$z[28][4]['listitem']="index,end,pre,next,pageno";
$z[28][4]['listsize']="5";
$z[29]=Array("include","",5473,5510);
$z[29][4]['filename']="footer.htm";

?>