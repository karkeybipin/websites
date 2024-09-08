// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main(void)
// {
//     char *query;
//     char *param;
//     char *result;
//     int num1, num2;
//     char op;

//     printf("Content-type: text/html\n\n");

//     query = getenv("QUERY_STRING");
//     if (query == NULL)
//     {
//         printf("<p>Error: No parameters found.</p>");
//         return 0;
//     }

//     param = strtok(query, "&");
//     while (param != NULL)
//     {
//         if (strncmp(param, "num1=", 5) == 0)
//         {
//             num1 = atoi(param + 5);
//         }
//         else if (strncmp(param, "num2=", 5) == 0)
//         {
//             num2 = atoi(param + 5);
//         }
//         else if (strncmp(param, "op=", 3) == 0)
//         {
//             op = param[3];
//         }
//         param = strtok(NULL, "&");
//     }

//     switch (op)
//     {
//     case '+':
//         result = (char *)malloc(sizeof(char) * 10);
//         sprintf(result, "%d", num1 + num2);
//         break;
//     case '-':
//         result = (char *)malloc(sizeof(char) * 10);
//         sprintf(result, "%d", num1 - num2);
//         break;
//     case '*':
//         result = (char *)malloc(sizeof(char) * 10);
//         sprintf(result, "%d", num1 * num2);
//         break;
//     case '/':
//         if (num2 == 0)
//         {
//             result = "Error: Division by zero.";
//         }
//         else
//         {
//             result = (char *)malloc(sizeof(char) * 10);
//             sprintf(result, "%.2f", (float)num1 / num2);
//         }
//         break;
//     default:
//         result = "Error: Invalid operator.";
//     }

//     printf("<html>\n");
//     printf("<head>\n");
//     printf("<title>Web Calculator</title>\n");
//     printf("<link rel=\"stylesheet\" href=\"style.css\">\n");
//     printf("</head>\n");
//     printf("<body>\n");
//     printf("<div class=\"calculator\">\n");
//     printf("<form>\n");
//     printf("<input type=\"text\" id=\"result\" name=\"result\" readonly value=\"%s\">\n", result);
//     printf("<br>\n");
//     printf("<input type=\"button\" value=\"1\" onclick=\"updateResult(1)\">\n");
//     printf("<input type=\"button\" value=\"2\" onclick=\"updateResult(2)\">\n");
//     printf("<input type=\"button\" value=\"3\" onclick=\"updateResult(3)\">\n");
//     printf("<input type=\"button\" value=\"+\" onclick=\"updateResult('+')\">\n");
//     printf("<br>\n");
//     printf("<input type=\"button\" value=\"4\" onclick=\"updateResult(4)\">\n");
//     printf("<input type=\"button\" value=\"5\" onclick=\"updateResult(5)\">\n");
//     printf("<input type=\"button\" value=\"6\" onclick=\"updateResult(6)\">\n");
//     printf("<input type=\"button\" value=\"-\" onclick=\"updateResult('-')\">\n");
//     printf("<br>\n");
//     printf("<input type=\"button\" value=\"7\" onclick=\"updateResult(7)\">\n");
//     printf("<input type=\"button\" value=\"8\" onclick=\"updateResult(8)\">\n");
//     printf("<input type=\"button\" value=\"9\" onclick=\"updateResult(9)\">\n");
//     printf("<input type=\"button\" value=\"*\" onclick=\"updateResult('*')\">\n");
//     printf("<br>\n");
//     printf("<input type=\"button\" value=\"0\" onclick=\"updateResult(0)\">\n");
//     printf("<input type=\"reset\" value=\"Clear\">\n");
//     printf("<input type=\"button\" value=\"/\" onclick=\"updateResult('/')\">\n");
//     printf("<input type=\"hidden\" id=\"num1\" name=\"num1\" value=\"%d\">\n", num1);
//     printf("<input type=\"hidden\" id=\"num2\" name=\"num2\" value=\"%d\">\n", num2);
//     printf("<input type=\"hidden\" id=\"op\" name=\"op\" value=\"%c\">\n", op);
//     printf("</form>\n");
//     printf("</div>\n");
//     printf("<script src=\"script.js\"></script>\n");
//     printf("</body>\n");
//     printf("</html>\n");

//     free(result);

//     return 0;
// }
