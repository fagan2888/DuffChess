//
//  DuffChessBoard.h
//  DuffChess
//
//  Created by Gudbrand Tandberg on 20/08/14.
//  Copyright (c) 2014 Duff Development. All rights reserved.
//

#import <Foundation/Foundation.h>

/*
 * ChessBoard - objekt som lagrer spilltilstanden og som har metoder for å:
 * - endre tilstanden til brettet
 * - sjekke muligheter hente egenskaper
 */

@interface DuffChessBoard : NSObject

//liten smakebit av metodene som kommer til å finnes her

@property NSArray *Board;

int getTurn();
int canCastle(int side);
int canEnPassant();

// og masse mer - dette må tenkes igjennom litt

@end
