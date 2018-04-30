#include <gtk/gtk.h>
#include "lib/functions.h"
#include "lib/callbacks.h"

int main (int argc, char **argv) {
	// Variables and pointers
	// Main View and Layout
	GtkWidget *window;
	GtkWidget *layout;

	// COMPONENTS
	GtkWidget *btn;
	GtkWidget *inputX;

	// Main Loop window view
	gtk_init(&argc, &argv);

	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_title(GTK_WINDOW(window), "Calculadora");
	gtk_window_set_default_size(GTK_WINDOW(window), 500, 350);
	gtk_window_set_position(GTK_WINDOW(window) ,GTK_WIN_POS_CENTER_ALWAYS);

	layout = gtk_fixed_new();
	gtk_container_add(GTK_CONTAINER(window), layout);

	inputX = gtk_entry_new();
	gtk_fixed_put(GTK_FIXED(layout), inputX, 10, 20);
	gtk_widget_set_size_request(inputX, 120, 40);

	btn = gtk_button_new_with_label("Calcular Seno");
	gtk_fixed_put(GTK_FIXED(layout), btn, 10, 90);
	gtk_widget_set_size_request(btn, 70, 30);

	g_signal_connect(G_OBJECT(btn), "clicked", G_CALLBACK(callbackClick), inputX);

	g_signal_connect(G_OBJECT(window), "destroy", G_CALLBACK(gtk_main_quit), NULL);

	gtk_widget_show_all(window);
	gtk_main();

	return 0; // exit status of application
}