const char *strings[168][2] = {
    {"", "", },
    {"Inserire moneta", "Insert coin", },
    {"Inserire gettone", "Insert token", },
    {"Pagare cassa", "Pay at desk", },
    {"Scelta programma", "Choose program", },
    {"e premere start", "and press start", },
    {"al  lavoro", "al  lavoro", },
    {"pausa lavoro", "pausa lavoro", },
    {"*  RAM   KO  *", "*  RAM   KO  *", },
    {"OBLO' APERTO", "OBLO' APERTO", },
    {"OBLO' SBLOCCATO", "OBLO' SBLOCCATO", },
    {"STOP EMERGENZA", "STOP EMERGENZA", },
    {"SBILANCIAMENTO", "LURCHING", },
    {"CHIAVISTELLO BLOCCATO", "STUCK LOCK", },
    {"ALLARME SERRATURA", "LOCK ALARM", },
    {"ALLARME LIVELLO", "LEVEL ALARM", },
    {"SERRATURA FORZATA", "FORCED LOCK", },
    {"NO TEMPERATURA", "NO TEMPERATURA", },
    {"INVERTER KO", "INVERTER KO", },
    {"FILTRO APERTO", "OPENED FILTER", },
    {"BLOCC.BRUCIATORE", "BLOCC.BRUCIATORE", },
    {"ALL.SONDA TEMP.", "ALL.SONDA TEMP.", },
    {"APERTO CON H2O", "OPEN WITH H2O", },
    {"ALLARME ACCELEROMETRO", "ACCELEROMETER ALARM", },
    {"ACC. FUORI SCALA", "ACC. OUT OF RANGE", },
    {"ALLARME VELOCITA'", "SPEED ALARM", },
    {"NO MOTO", "NOT MOVING", },
    {"NO FERMO", "NOT STOPPED", },
    {"ALLARME TEMPERATURA", "TEMPERATURE ALARM", },
    {"H2O IN VASCA", "H2O INSIDE", },
    {"ALLARME RIEMPIMENTO", "FILLUP ALARM", },
    {"ALLARME RISC.", "HEATING ALARM", },
    {"ALLARME SCARICO", "DRAIN ALARM", },
    {"MACCHINA ACCESA", "MACHINE ON", },
    {"NO  ARIA", "NO  ARIA", },
    {"ANOMALIA  ARIA", "ANOMALIA  ARIA", },
    {"ANTIPIEGA  !", "ANTIPIEGA  !", },
    {"DRY  CONTROL", "DRY  CONTROL", },
    {"TEMPERATURA ALTA", "TEMPERATURA ALTA", },
    {"MANUTENZIONE !", "MANUTENZIONE !", },
    {"ITALIANO", "ITALIAN", },
    {"INGLESE", "ENGLISH", },
    {"CONTRASTO LCD", "LCD CONTRAST", },
    {"STATISTICHE", "STATISTICS", },
    {"T acceso", "Active t.", },
    {"T lavoro", "Work t.", },
    {"T moto", "Run t.", },
    {"T ventilaz.", "Fan run time", },
    {"T risc.", "Heat time", },
    {"Cicli par", "Part cycles", },
    {"Cicli tot", "Tot cycles", },
    {"Gettoni totali", "Total coins", },
    {"Salvataggio in corso...", "Saving...", },
    {"TEMPO CICLO", "CYCLE TIME", },
    {"TEMPERATURA", "TEMPERATURE", },
    {"VELOCITA'", "SPEED", },
    {"LUNEDI'", "MONDAY", },
    {"MARTEDI'", "TUESDAY", },
    {"MERCOLEDI'", "WEDNESDAY", },
    {"GIOVEDI'", "THURSDAY", },
    {"VENERDI'", "FRIDAY", },
    {"SABATO", "SATURDAY", },
    {"DOMENICA", "SUNDAY", },
    {"MODIF. PROGRAMMA", "MODIFY PROG.", },
    {"Nessun programma", "No programs", },
    {"Crea un nuovo programma", "Create a new program", },
    {"PARAMETRI MAC.", "MAC. PARAMETERS", },
    {"PARAMETRI PASSO", "STEP PARAMETERS", },
    {"PREZZO", "PRICE", },
    {"Prezzo", "Price", },
    {"TIPO", "TYPE", },
    {"PASSI PROGRAMMA", "PROGRAM STEPS", },
    {"Passo", "Step", },
    {"Programma vuoto", "Empty program", },
    {"Ammollo", "Soaking", },
    {"Prelavaggio", "Prewash", },
    {"Lavaggio", "Washing", },
    {"Risciacquo", "Flushing", },
    {"Scarico", "Drain", },
    {"Centrifuga", "Centrifuge", },
    {"Srotolamento", "Unrolling", },
    {"Attesa operatore", "Waiting", },
    {"FASE", "PHASE", },
    {"Precarica in corso", "Preloading", },
    {"Attesa livel.e temper.", "Wait for temper/level", },
    {"Attesa livello", "Waiting for the water level", },
    {"Attesa temperatura", "Waiting for temperature", },
    {"Riempimento", "Filling up", },
    {"Att.termodegradazione", "Wait for thermal down", },
    {"Attesa livel. scarico", "Wait for drain level", },
    {"Prescarico", "Pre-draining", },
    {"Preparazione", "Preparing", },
    {"Attesa velocità", "Warning speed", },
    {"In frenata", "Stopping due to lurching", },
    {"Attesa frenata", "Waiting for full stop", },
    {"Scarico forzato", "Forced drain", },
    {"Recupero", "Recovery", },
    {"Uscita lavaggio", "Washing exit", },
    {"Pausa lavaggio", "Cycle pause", },
    {"Scarico necessario; tenere premuto il tasto stop", "Drain required; long press the stop button", },
    {"Molto sporchi con prelavaggio", "Very dirty with prewash", },
    {"Sportchi con prelavaggio", "Dirty with prewash", },
    {"Molto sporchi", "Very dirty", },
    {"Sporchi", "Dirty", },
    {"Colorati", "Coloured", },
    {"Sintetici", "Artificial", },
    {"Piumoni", "Duvets", },
    {"Delicati", "Delicates", },
    {"Lana", "Whool", },
    {"Lino e tendaggi", "Linen and curtains", },
    {"Centrifuga per delicati", "Centrifuge for delicates", },
    {"Sanificazione", "Sanification", },
    {"Errore EEPROM", "EEPROM error", },
    {"Allarme spegnimento", "Power off alarm", },
    {"Allarme comunicazione", "Communication alarm", },
    {"Allarme", "Alarm", },
    {"Cancellare il programma?", "Delete the program?", },
    {"Inizio programma", "Program start", },
    {"TEST LIVELLO", "LEVEL TEST", },
    {"Errore di comunicazione con la macchina", "Communication error with the machine", },
    {"Lingua videate", "Display language", },
    {"Lingua", "Language", },
    {"INFORMAZIONI", "INFORMATIONS", },
    {"Errore", "Error", },
    {"Abilitata", "Enabled", },
    {"Si", "Yes", },
    {"No", "No", },
    {"Debug", "Debug", },
    {"H2O cal", "Warm H2O", },
    {"H2O fre", "Cold H2O", },
    {"H2O flu", "Flux H2O", },
    {"H2O rec", "Rec H2O", },
    {"Chiu. oblo", "Port close", },
    {"Aper. oblo", "Port open", },
    {"T sap. 1", "T det. 1", },
    {"T sap. 2", "T det. 2", },
    {"T sap. 3", "T det. 3", },
    {"T sap. 4", "T det. 4", },
    {"T sap. 5", "T det. 5", },
    {"T sap. 6", "T det. 6", },
    {"T sap. 7", "T det. 7", },
    {"T sap. 8", "T det. 8", },
    {"T sap. 9", "T det. 9", },
    {"T sap. 10", "T det. 10", },
    {"FINE LAVAGGIO", "CYCLE END", },
    {"INIZIO LAVAGGIO", "CYCLE START", },
    {"LAV. INTERROTTO", "CYCLE STOPPED", },
    {"APRIRE OBLO", "OPEN PORT", },
    {"STANDBY SAPONI", "DET. STANDBY", },
    {"Inizio", "Start", },
    {"Copiare in posizione", "Copy in position", },
    {"Sapone", "Detergent", },
    {"TEST TEMPERATURE", "TEMPERATURES TEST", },
    {"TEST INGRESSI", "INPUT TEST", },
    {"TEST RISCALDO", "HEATING TEST", },
    {"S. PROSSIMITA'", "PROXIMITY S.", },
    {"TEST CONTALITRI", "TEST L. COUNTER", },
    {"TEST MOTORE AVA", "TEST FORWARD", },
    {"TEST MOTORE IND", "TEST BACKWARD", },
    {"TEST 0/10V", "TEST 0/10V", },
    {"ARCHIVIAZIONE", "STORAGE", },
    {"Inserire un dispositivo di archiviazione", "Insert a storage device", },
    {"Dispositivo rimosso; premere menu' per riavviare la macchina", "Device removed; press menu' to reset the machine", },
    {"Nessuna configurazione trovata", "No configuration found", },
    {"Configurazione caricata con successo", "Configuration successfully loaded", },
    {"Errore nel caricamento della configurazione", "Configuration load failed", },
    {"Aprire oblo' e svuotare cesto", "Open and empty ", },
    {"Frenata in corso", "Stopping", },
};

