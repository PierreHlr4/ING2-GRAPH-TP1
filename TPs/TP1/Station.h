//
// Created by pierr on 04/09/2024.
//

#ifndef TP_ING2_STATION_H
#define TP_ING2_STATION_H

typedef struct station
{
    int m_id;        // Indice num�rique pour l'affichage
    float m_x, m_y; // Position sur le terrain
    int m_frequence; // Fr�quence affect�e (ou 0 si pas encore de fr�quence)
} Station;

#endif //TP_ING2_STATION_H
