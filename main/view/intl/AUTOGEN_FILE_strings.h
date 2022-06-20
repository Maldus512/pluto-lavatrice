#ifndef AUTOGEN_FILE_STRINGS_H_INCLUDED
#define AUTOGEN_FILE_STRINGS_H_INCLUDED

typedef enum {
    STRINGS_ = 0,
    STRINGS_INSERIRE_MONETA,
    STRINGS_INSERIRE_GETTONE,
    STRINGS_PAGARE_CASSA,
    STRINGS_SCELTA_PROGRAMMA,
    STRINGS_E_PREMERE_START,
    STRINGS_MACCHINA_AL_LAVORO,
    STRINGS_MACCHINA_IN_PAUSA,
    STRINGS_ALLARME_ERRORE_RAM,
    STRINGS_ALLARME_OBLO_APERTO,
    STRINGS_ALLARME_OBLO_SBLOCCATO,
    STRINGS_ALLARME_EMERGENZA,
    STRINGS_ALLARME_SBILANCIAMENTO,
    STRINGS_ALLARME_CHIAVISTELLO_BLOCCATO,
    STRINGS_ALLARME_SERRATURA,
    STRINGS_ALLARME_LIVELLO,
    STRINGS_ALLARME_SERRATURA_FORZATA,
    STRINGS_ALLARME_TEMPO_SCADUTO_T1,
    STRINGS_ALLARME_INVERTER,
    STRINGS_ALLARME_FILTRO_APERTO,
    STRINGS_ALLARME_BLOCCO_BRUCIATORE,
    STRINGS_ALLARME_TEMPERATURA_1,
    STRINGS_ALLARME_APERTO_H2O,
    STRINGS_ALLARME_ACCELEROMETRO,
    STRINGS_ALLARME_ACCELEROMETRO_FUORI_SCALA,
    STRINGS_ALLARME_VELOCITA,
    STRINGS_ALLARME_NO_MOTO,
    STRINGS_ALLARME_NO_FERMO,
    STRINGS_ALLARME_TEMPERATURA,
    STRINGS_ALLARME_H2O_IN_VASCA,
    STRINGS_ALLARME_RIEMPIMENTO,
    STRINGS_ALLARME_RISCALDAMENTO,
    STRINGS_ALLARME_SCARICO,
    STRINGS_MACCHINA_ACCESA,
    STRINGS_ALLARME_FLUSSO_ARIA,
    STRINGS_ALLARME_ANOMALIA_ARIA,
    STRINGS_AVVISO_ANTIPIEGA,
    STRINGS_AVVISO_DRY_CONTROL,
    STRINGS_AVVISO_SOVRATEMPERATURA,
    STRINGS_AVVISO_MANUTENZIONE,
    STRINGS_ITALIANO,
    STRINGS_INGLESE,
    STRINGS_CONTRASTO_LCD,
    STRINGS_STATISTICHE,
    STRINGS_TEMPO_ACCENSIONE,
    STRINGS_TEMPO_LAVORO,
    STRINGS_TEMPO_MOTO,
    STRINGS_TEMPO_VENTILAZIONE,
    STRINGS_TEMPO_RISCALDAMENTO,
    STRINGS_CICLI_PARZIALI,
    STRINGS_CICLI_TOTALI,
    STRINGS_GETTONI_TOTALI,
    STRINGS_SALVATAGGIO_IN_CORSO,
    STRINGS_TEMPO_CICLO,
    STRINGS_TEMPERATURA,
    STRINGS_VELOCITA,
    STRINGS_LUNEDI,
    STRINGS_MARTEDI,
    STRINGS_MERCOLEDI,
    STRINGS_GIOVEDI,
    STRINGS_VENERDI,
    STRINGS_SABATO,
    STRINGS_DOMENICA,
    STRINGS_MODIF_PROGRAMMA,
    STRINGS_NESSUN_PROGRAMMA,
    STRINGS_NUOVO_PROGRAMMA,
    STRINGS_PARAMETRI_MAC,
    STRINGS_PARAMETRI_PASSO,
    STRINGS_PREZZO,
    STRINGS_PREZZO_LOWER,
    STRINGS_TIPO,
    STRINGS_PASSI_PROGRAMMA,
    STRINGS_PASSO,
    STRINGS_PROGRAMMA_VUOTO,
    STRINGS_AMMOLLO,
    STRINGS_PRELAVAGGIO,
    STRINGS_LAVAGGIO,
    STRINGS_RISCIACQUO,
    STRINGS_SCARICO,
    STRINGS_CENTRIFUGA,
    STRINGS_SROTOLAMENTO,
    STRINGS_ATTESA_OPERATORE,
    STRINGS_FASE,
    STRINGS_PRECARICA_IN_CORSO,
    STRINGS_ATTESA_LIVELLO_E_TEMPERATURA,
    STRINGS_ATTESA_LIVELLO,
    STRINGS_ATTESA_TEMPERATURA,
    STRINGS_RIEMPIMENTO,
    STRINGS_ATTESA_TERMODEGRADAZIONE,
    STRINGS_ATTESA_LIVELLO_SCARICO,
    STRINGS_PRESCARICO,
    STRINGS_PREPARAZIONE,
    STRINGS_RAGGIUNGIMENTO_VELOCITA,
    STRINGS_IN_FRENATA,
    STRINGS_ATTESA_FRENATA,
    STRINGS_SCARICO_FORZATO,
    STRINGS_RECUPERO,
    STRINGS_USCITA_LAVAGGIO,
    STRINGS_PAUSA_LAVAGGIO,
    STRINGS_SCARICO_NECESSARIO,
    STRINGS_MOLTO_SPORCHI_CON_PRELAVAGGIO,
    STRINGS_SPORCHI_CON_PRELAVAGGIO,
    STRINGS_MOLTO_SPORCHI,
    STRINGS_SPORCHI,
    STRINGS_COLORATI,
    STRINGS_SINTETICI,
    STRINGS_PIUMONI,
    STRINGS_DELICATI,
    STRINGS_LANA,
    STRINGS_LINO_E_TENDAGGI,
    STRINGS_CENTRIFUGA_PER_DELICATI,
    STRINGS_SANIFICAZIONE,
    STRINGS_ERRORE_EEPROM,
    STRINGS_ALLARME_SPEGNIMENTO,
    STRINGS_ALLARME_COMUNICAZIONE,
    STRINGS_ALLARME,
    STRINGS_CANCELLARE_IL_PROGRAMMA,
    STRINGS_INIZIO_PROGRAMMA,
    STRINGS_TEST_LIVELLO,
    STRINGS_ERRORE_COMUNICAZIONE,
    STRINGS_LINGUA_VIDEATE,
    STRINGS_LINGUA,
    STRINGS_INFORMAZIONI,
    STRINGS_ERRORE,
    STRINGS_ABILITATA,
    STRINGS_SI,
    STRINGS_NO,
    STRINGS_DEBUG,
    STRINGS_TEMPO_H2O_CALDA,
    STRINGS_TEMPO_H2O_FREDDA,
    STRINGS_TEMPO_H2O_FLUSSO,
    STRINGS_TEMPO_H2O_REC_DEP,
    STRINGS_CHIUSURE_OBLO,
    STRINGS_APERTURE_OBLO,
    STRINGS_TEMPO_SAPONE_1,
    STRINGS_TEMPO_SAPONE_2,
    STRINGS_TEMPO_SAPONE_3,
    STRINGS_TEMPO_SAPONE_4,
    STRINGS_TEMPO_SAPONE_5,
    STRINGS_TEMPO_SAPONE_6,
    STRINGS_TEMPO_SAPONE_7,
    STRINGS_TEMPO_SAPONE_8,
    STRINGS_TEMPO_SAPONE_9,
    STRINGS_TEMPO_SAPONE_10,
    STRINGS_FINE_LAVAGGIO,
    STRINGS_INIZIO_LAVAGGIO,
    STRINGS_LAVAGGIO_INTERROTTO,
    STRINGS_APRIRE_OBLO,
    STRINGS_STANDBY_SAPONI,
    STRINGS_INIZIO,
    STRINGS_COPIARE_IN_POSIZIONE,
    STRINGS_SAPONE,
    STRINGS_TEST_TEMPERATURE,
    STRINGS_TEST_INGRESSI,
    STRINGS_TEST_RISCALDO,
    STRINGS_TEST_S_PROSSIMITA,
    STRINGS_TEST_CONTALITRI,
    STRINGS_TEST_MOTORE_AVA,
    STRINGS_TEST_MOTORE_IND,
    STRINGS_TEST_010,
    STRINGS_ARCHIVIAZIONE,
    STRINGS_INSERIRE_UN_DISPOSITIVO_DI_ARCHIVIAZIONE,
    STRINGS_DISPOSITIVO_RIMOSSO_PREMERE_MENU_PER_RIAVVIARE_LA_MACCHINA,
    STRINGS_NESSUNA_CONFIGURAZIONE_TROVATA,
    STRINGS_CONFIGURAZIONE_CARICATA_CON_SUCCESSO,
    STRINGS_ERRORE_NEL_CARICAMENTO_DELLA_CONFIGURAZIONE,
} strings_t;

extern const char *strings[166][2];

#endif
