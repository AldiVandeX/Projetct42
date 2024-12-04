int main(void)
{
int fd;
char *buf;
int	char_read;

if (buf[char_read] != '\0')
while ((char_read = read(fd, buf, 3)))
{
	buf[char_read] = '\n';
	printf("%s", buf);
}
return (0);
}
