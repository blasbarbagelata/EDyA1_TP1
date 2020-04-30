#ifndef __GLIST_H__
#define __GLIST_H__

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>

typedef struct _GNodo {
  void* dato;
  struct _GNodo *sig;
  struct _GNodo *ant;
}GNodo;

typedef struct {
  GNodo* primero;
  GNodo* ultimo;
}GList;

typedef void (*Destruir) (void *dato);

GList* glist_crear();

void glist_destruir(GList *lista, Destruir funcionDestruir);

void glist_agregar_final(GList **lista, void *dato);

GList* glist_copiar (GList *lista);

void liberar_nodo (void *nodo);

#endif
