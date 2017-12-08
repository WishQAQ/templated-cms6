<li>
		 	  	  <div class="article-date">
	               <strong style="font-size: 20px;">[field:pubdate function=MyDate('d',@me)/]</strong>
                    <p>[field:pubdate function=MyDate('Y-m',@me)/]</p>
               	  </div>	
		          <div class="article-info">
		            	<a href="[field:arcurl/]" title="[field:title/]" >
		            		<h3>[field:fulltitle/]</h3>
		            		<p>
		            			[field:body function='cn_substr(html2text(@me),180)'/]...
		            			 <!--[field:description/]...-->
		            		</p>
		            	</a>
		           </div>
		          </li>