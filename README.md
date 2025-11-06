# Tarea-Analisis: Sistema de Rutas Médicas


Jose Manuel Mariaca Patiño: Creación del repositorio, estructura inicial del proyecto, adaptación de la clase `Vertice` para los Centros Médicos y responsable del análisis de complejidad. 
Jhon Piero Alessandro Torres Castro: Adaptación de la clase `Arista` para las Rutas y desarrollo de las funciones de modificación (`InsertaVertice`, `InsertaArista`). 
Sergio David Vega Francia: Implementación de las funciones de consulta (`MostrarListaAdyacencia`, `MostrarAdyacentes`, `ExisteRuta`), las funciones de EliminarVertice / EliminarArista y el main.cpp de pruebas. 


Sea V el número de vértices (centros) y **k** el grado de salida máximo (peor caso O(V)).

1.  Inserción de Nodo (InsertaVertice):
     Proceso: Requiere verificar si el nodo ya existe, lo que implica recorrer la lista de vértices.
     Complejidad: O(V)

2.  Inserción de Arista (InsertaArista):
     Proceso: Requiere encontrar el vértice origen (O(V)) y luego recorrer su lista de adyacencia hasta el final (O(k)).
     Complejidad: O(V + k) (o O(V) en el peor caso si k es O(V)).

3.  Eliminación de Arista (EliminarArista):
     Proceso: Requiere encontrar el vértice origen (O(V)) y luego buscar la arista en su lista de adyacencia (O(k)).
     Complejidad: O(V + k) (o O(V) en el peor caso).

4.  **Eliminación de Nodo (EliminarVertice):
    * **Proceso:** Esta es la operación más costosa.
        1.  Encontrar el vértice a eliminar: O(V).
        2.  Eliminar sus aristas de salida: O(k).
        3.  Recorrer todos los otros vértices (O(V)) y, para cada uno, revisar su lista de adyacencia (O(k)) para eliminar aristas que apunten al nodo borrado.
    * **Complejidad: O(V * k) (o O(V^2) en el peor caso).
