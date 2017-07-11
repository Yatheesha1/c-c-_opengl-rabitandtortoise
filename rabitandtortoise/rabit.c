void rabbitdraw(int y)
{
const float a[] ={48,56	,
45,56	,
44,56	,
38,57	,
34,61	,
30,63	,
21,69	,
18,72	,
15,76	,
12,82	,
11,87	,
9,91	,
9,91	,
5,97	,
4,100	,
3,102	,
2,105	,
2,109	,
2,113	,
8,116	,
10,118	,
19,122	,
21,124	,
26,128	,
29,128	,
33,129	,
37,131	,
40,132	,
46,132	,
48,132	,
52,130	,
60,123	,
63,114	,
63,106	,
63,96	,
63,88	,
62,85	,
61,82	,
58,74	,
55,69	,
54,64	

	};
int	ac=41;
	const float b[]={50,56	,
51,42	,
53,33	,
57,18	,
64,8	,
73,1	,
85,3	,
87,19	,
85,27	,
81,38	,
78,45	,
74,50	,
75,63	,
66,69	,
52,72	

	};
int bc =15;
const float c[] ={58,69	,
68,54	,
77,47	,
80,41	,
87,33	,
95,22	,
108,17	,
115,18	,
120,23	,
120,28	,
118,37	,
112,47	,
101,55	,
95,58	,
85,65	,
77,69	,
68,78	
	};
int cc=17;
const float d[]={78,66	,
80,67	,
80,67	,
86,73	,
86,73	,
90,75	,
92,77	,
97,83	,
97,84	,
98,89	,
97,92	,
94,96	,
92,96	,
90,96	,
89,96	,
83,96	,
64,87	,
73,66	};
int dc =18;
const float e[]={96,85	,
100,81	,
104,78	,
108,76	,
110,75	,
120,73	,
128,72	,
134,71	,
145,73	,
157,76	,
163,77	,
170,82	,
176,85	,
181,87	,
187,88	,
192,93	,
192,93	,
198,100	,
200,103	,
203,106	,
205,111	,
208,117	,
210,123	,
212,129	,
213,135	,
213,141	,
214,149	,
214,151	,
211,156	,
205,163	
};
int ec=30;
float f[]={210,151	,
215,149	,
216,148	,
217,148	,
221,149	,
223,150	,
227,156	,
230,159	,
233,163	,
234,166	,
233,172	,
230,179	,
224,187	,
223,189	,
218,191	,
216,191	,
210,191	,
208,190	,
205,188	,
202,186	,
198,183	};

const float g[]={195,183	,
193,187	,
193,191	,
192,194	,
190,198	,
189,200	,
186,203	,
182,204	,
177,205	,
166,207	,
162,207	,
155,204	,
155,204	,
152,204	,
150,204	,
145,204	,
145,204	,
142,204	,
139,205	,
136,205	,
133,205	,
130,206	,
123,206	,
121,204	,
120,198	,
122,195	,
125,193	,
129,189	,
131,188	,
133,187	,
138,185	,
142,184	
};
const float h[]={147,184	,
145,184	,
140,184	,
139,184	,
127,185	,
116,185	,
109,184	,
98,182	,
105,154	,
159,161	
};
const float z[]={96,180	,
95,182	,
92,185	,
90,188	,
88,192	,
85,197	,
85,200	,
82,204	,
80,206	,
74,207	,
71,207	,
63,207	,
60,207	,
56,204	,
54,202	,
52,197	,
52,192	,
53,191	,
55,187	,
58,185	,
59,184	,
63,182	,
65,179	,
66,176	
};
const float j[]={44,129	,
46,134	,
47,136	,
47,141	,
50,148	,
50,155	,
52,159	,
57,164	,
65,175	,
112,170	,
108,111	
};
const float k[]={28,124	,
52,53	,
78,64	,
81,80	,
94,85	,
138,78	,
202,120	,
211,152	,
196,185	,
145,186	,
97,182	,
68,176	,
50,158	,
52,128	,
39,125	
	
};
float eye[]={38,75	,
32,78	,
36,83	,
41,83	,
48,79	,
43,74	
};
int fc=21,gc=32,hc=10,zc=24,jc=11,kc=15;
int i; 
glBegin(GL_POLYGON) ;            /* draw a filled polygon */
glColor3f ( 1.0, 1.0, 1.0);       /* draw in light red */
for(i=0;i<ac;i++)
   glVertex2f(a[i*2],a[i*2+1]);
glEnd();
   glBegin(GL_POLYGON) ; 
for(i=0;i<kc;i++)
   glVertex2f(k[i*2],k[i*2+1]);
glEnd();
glBegin(GL_POLYGON) ; 
for(i=0;i<dc;i++)
   glVertex2f(d[i*2],d[i*2+1]);
glEnd();
glBegin(GL_POLYGON) ; 
for(i=0;i<cc;i++)
   glVertex2f(c[i*2],c[i*2+1]);
glEnd();
glBegin(GL_POLYGON) ; 
for(i=0;i<bc;i++)
   glVertex2f(b[i*2],b[i*2+1]);
glEnd();
glBegin(GL_POLYGON) ; 
for(i=0;i<ec;i++)
   glVertex2f(e[i*2],e[i*2+1]);
glEnd();
glBegin(GL_POLYGON) ; 
for(i=0;i<fc;i++)
   glVertex2f(f[i*2],f[i*2+1]);
glEnd();
glBegin(GL_POLYGON) ; 
for(i=0;i<gc;i++)
   glVertex2f(g[i*2],g[i*2+1]);
glEnd();
glBegin(GL_POLYGON) ; 
for(i=0;i<hc;i++)
   glVertex2f(h[i*2],h[i*2+1]);
glEnd();
glPushMatrix();
 
if(y%3==0)
{
  glTranslated(95,182,0);
  glRotated(+20,0,0,1);
  glTranslated(-95,-182,0);}
  glBegin(GL_POLYGON) ; 
  for(i=0;i<zc;i++)
     glVertex2f(z[i*2],z[i*2+1]);
  glEnd();
  glPopMatrix();
  glBegin(GL_POLYGON) ; 
  for(i=0;i<jc;i++)
     glVertex2f(j[i*2],j[i*2+1]);
  glEnd();
  glColor3f ( 0.0, 0.0, 0.0); 
  glBegin(GL_POLYGON) ; 
  for(i=0;i<6;i++)
     glVertex2f(eye[i*2],eye[i*2+1]);
  glEnd();
}