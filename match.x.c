#if 0
	shc Version 3.8.7, Generic Script Compiler
	Copyright (c) 1994-2009 Francisco Rosales <frosal@fi.upm.es>

	./shc -v -f match 
#endif

static  char data [] = 
#define      opts_z	1
#define      opts	((&data[0]))
	"\055"
#define      pswd_z	256
#define      pswd	((&data[57]))
	"\315\017\317\201\335\130\232\361\151\104\316\231\174\052\347\012"
	"\323\057\136\335\315\140\127\132\315\026\342\310\035\301\113\352"
	"\320\033\154\255\163\007\237\335\113\155\166\310\227\135\322\153"
	"\215\061\110\133\221\240\265\136\347\046\212\325\044\000\015\334"
	"\221\004\070\003\312\043\153\146\332\373\237\266\020\325\176\216"
	"\330\314\245\141\151\217\012\121\266\224\046\332\225\064\267\047"
	"\071\357\053\003\022\226\152\355\222\012\243\242\337\042\060\267"
	"\357\325\031\130\144\043\252\033\270\320\366\116\005\255\165\076"
	"\235\240\102\260\066\254\235\310\266\100\152\226\143\233\115\122"
	"\160\147\253\325\213\125\360\104\046\346\222\053\224\010\151\061"
	"\250\253\341\337\127\176\250\016\277\022\244\043\256\362\165\036"
	"\132\040\363\345\165\344\051\233\312\274\306\137\304\060\220\154"
	"\333\162\113\063\360\364\101\260\006\346\323\265\331\110\323\063"
	"\151\307\031\337\253\102\172\166\376\101\325\302\161\145\057\115"
	"\327\173\200\310\157\302\171\166\251\114\053\202\225\376\266\376"
	"\305\317\336\161\022\130\347\020\232\275\323\014\042\003\132\372"
	"\176\332\303\356\235\074\144\106\210\220\310\036\217\176\035\125"
	"\116\373\306\140\124\255\160\357\153\104\373\215\107\126\210\306"
	"\060\114\264\315\210\031\024\021\251\334\057\070\133\115\215\251"
	"\110\123\011\235\001\172\214\154\267\227\046\325\130\162\277\051"
	"\215\053\327\001\063\166\336\176\344\125\107\174\262\032\350\100"
	"\113\061\233\334\321\120\073\211\350"
#define      xecc_z	15
#define      xecc	((&data[347]))
	"\325\043\350\265\211\376\154\323\272\361\115\374\222\204\162\224"
	"\036"
#define      lsto_z	1
#define      lsto	((&data[363]))
	"\241"
#define      shll_z	8
#define      shll	((&data[365]))
	"\271\253\022\373\273\327\303\141\137\102"
#define      chk2_z	19
#define      chk2	((&data[377]))
	"\103\032\112\331\202\162\323\175\167\115\312\150\117\044\300\143"
	"\063\056\050\065\316\020\135\002"
#define      chk1_z	22
#define      chk1	((&data[401]))
	"\047\205\005\076\207\234\210\231\355\045\237\167\103\352\105\124"
	"\066\313\237\033\374\146\327\042\361\167"
#define      text_z	337
#define      text	((&data[471]))
	"\044\355\242\371\013\015\134\126\117\301\323\011\004\317\247\233"
	"\023\301\346\160\304\162\031\367\231\237\375\020\141\213\161\205"
	"\171\023\177\205\040\334\333\160\235\256\171\241\176\040\075\262"
	"\063\211\343\113\104\021\223\333\106\271\360\047\162\107\122\313"
	"\315\104\324\037\264\004\043\107\360\125\347\265\123\022\177\320"
	"\270\345\043\064\302\217\374\346\001\067\262\037\072\126\365\031"
	"\143\105\262\226\122\203\164\314\337\012\316\013\220\111\265\323"
	"\214\374\103\042\164\221\216\171\077\315\204\364\212\104\025\251"
	"\210\054\043\131\301\222\372\255\306\136\164\344\162\043\077\314"
	"\106\140\223\012\220\034\346\001\157\061\160\056\113\033\360\323"
	"\276\004\233\375\215\342\047\375\233\246\113\325\077\266\166\114"
	"\235\123\160\336\143\242\126\131\315\101\177\373\266\316\114\174"
	"\003\017\101\063\357\271\321\303\003\077\204\234\312\031\245\304"
	"\220\125\226\030\011\051\332\113\040\311\021\345\241\156\377\211"
	"\345\047\231\251\157\365\361\117\133\315\100\072\333\000\106\216"
	"\303\165\025\120\176\152\036\343\173\110\003\156\276\307\315\220"
	"\036\004\272\277\072\100\350\127\111\155\156\367\272\027\011\236"
	"\077\142\341\237\304\030\044\200\257\326\315\174\115\311\016\327"
	"\174\330\113\313\075\267\002\272\201\242\016\254\047\150\070\345"
	"\352\336\065\045\121\217\203\057\104\354\356\257\073\235\150\067"
	"\313\202\156\105\005\145\003\153\200\041\023\277\145\167\225\137"
	"\374\316\025\144\264\217\372\356\221\270\304\273\015\335\155\261"
	"\327\277\037\102\304\060\247\041\157\135\351\277\356\150\252\142"
	"\351\032\363\334\345\015\250\032\104\374\077\374\111\225\120\141"
	"\221\341\044\002\245\226\033\235\057\273\232\100\034\046\262\242"
	"\237\305\042\044\346\376\000\126\234\256\317\075\055\360\173\276"
#define      tst2_z	19
#define      tst2	((&data[843]))
	"\170\066\335\200\235\112\025\022\337\324\020\206\013\110\017\033"
	"\254\202\332\323\263\254\025\146\230"
#define      rlax_z	1
#define      rlax	((&data[865]))
	"\062"
#define      msg1_z	42
#define      msg1	((&data[869]))
	"\166\036\172\221\202\010\104\114\174\144\247\031\117\137\310\175"
	"\342\271\011\103\065\066\251\067\317\156\253\003\213\267\222\332"
	"\366\136\046\156\022\347\337\345\326\317\277\060\264\233\004\170"
#define      msg2_z	19
#define      msg2	((&data[915]))
	"\112\362\247\377\273\055\256\004\232\253\251\043\176\372\070\011"
	"\263\324\313\356"
#define      date_z	1
#define      date	((&data[934]))
	"\121"
#define      inlo_z	3
#define      inlo	((&data[935]))
	"\373\201\030"
#define      tst1_z	22
#define      tst1	((&data[940]))
	"\145\245\316\335\373\326\311\253\253\177\246\115\256\224\061\057"
	"\101\121\220\052\051\212\004\273\324\172\014\155\052"/* End of data[] */;
#define      hide_z	4096
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	0	/* Define as 1 to enable ptrace the executable */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask  = (unsigned long)&chkenv;
	mask ^= (unsigned long)getpid() * ~mask;
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
#	define PTRACE_ATTACH	PT_ATTACH
#endif
void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PTRACE_ATTACH, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;

	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	ret = chkenv(argc);
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		if (text_z < hide_z) {
			/* Prepend spaces til a hide_z script size. */
			scrpt = malloc(hide_z);
			if (!scrpt)
				return 0;
			memset(scrpt, (int) ' ', hide_z);
			memcpy(&scrpt[hide_z - text_z], text, text_z);
		} else {
			scrpt = text;	/* Script text */
		}
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, argv[0]);
		} else {
			scrpt = argv[0];
		}
	}
	j = 0;
	varg[j++] = argv[0];		/* My own name at execution */
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if !TRACEABLE
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
