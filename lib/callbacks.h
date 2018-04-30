#ifndef CALLBACKS_H
#define CALLBACKS_H

void callbackClick(GtkWidget *btn, GtkWidget *input) {
	const gchar *c = gtk_entry_get_text(GTK_ENTRY(input));
	gdouble y = g_strtod(c, NULL);
	g_print("%lf\n", cos_d(y));
}


#endif