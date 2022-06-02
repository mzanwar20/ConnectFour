#ifndef WINNER_CHECK
#define WINNER_CHECK




int winning_condition(int board[6][7][2], int n) {
	
	int winner = 0;
	
	if ((board[5][0][0] != 0) && (board[5][0][1] == n)) {
		if ((board[5][1][0] != 0) && (board[5][1][1] == n)) {
			if ((board[5][2][0] != 0) && (board[5][2][1] == n)) {
				if ((board[5][3][0] != 0) && (board[5][3][1] == n)) {
					winner = n;
				}
			}
		}
		else if ((board[4][0][0] != 0) && (board[4][0][1] == n)) {
			if ((board[3][0][0] != 0) && (board[3][0][1] == n)) {
				if ((board[2][0][0] != 0) && (board[2][0][1] == n)) {
					winner = n;
				}
			}
		}
		else if ((board[4][1][0] != 0) && (board[4][1][1] == n)) {
			if ((board[3][2][0] != 0) && (board[3][2][1] == n)) {
				if ((board[2][3][0] != 0) && (board[2][3][1] == n)) {
					winner = n;
				}
			}
		}
	}
	
	if ((board[5][1][0] != 0) && (board[5][1][1] == n)) {
		if ((board[5][2][0] != 0) && (board[5][2][1] == n)) {
			if ((board[5][3][0] != 0) && (board[5][3][1] == n)) {
				if ((board[5][4][0] != 0) && (board[5][4][1] == n)) {
					winner = n;
				}
			}
		}
		else if ((board[4][1][0] != 0) && (board[4][1][1] == n)) {
			if ((board[3][1][0] != 0) && (board[3][1][1] == n)) {
				if ((board[2][1][0] != 0) && (board[2][1][1] == n)) {
					winner = n;
				}
			}
		}
		else if ((board[4][2][0] != 0) && (board[4][2][1] == n)) {
			if ((board[3][3][0] != 0) && (board[3][3][1] == n)) {
				if ((board[2][4][0] != 0) && (board[2][4][1] == n)) {
					winner = n;
				}
			}
		}
	}
	
	if ((board[5][2][0] != 0) && (board[5][2][1] == n)) {
		if ((board[5][3][0] != 0) && (board[5][3][1] == n)) {
			if ((board[5][4][0] != 0) && (board[5][4][1] == n)) {
				if ((board[5][5][0] != 0) && (board[5][5][1] == n)) {
					winner = n;
				}
			}
		}
		else if ((board[4][2][0] != 0) && (board[4][2][1] == n)) {
			if ((board[3][2][0] != 0) && (board[3][2][1] == n)) {
				if ((board[2][2][0] != 0) && (board[2][2][1] == n)) {
					winner = n;
				}
			}
		}
		else if ((board[4][3][0] != 0) && (board[4][3][1] == n)) {
			if ((board[3][4][0] != 0) && (board[3][4][1] == n)) {
				if ((board[2][5][0] != 0) && (board[2][5][1] == n)) {
					winner = n;
				}
			}
		}	
	}
		
	if ((board[5][3][0] != 0) && (board[5][3][1] == n)) {
		if ((board[5][4][0] != 0) && (board[5][4][1] == n)) {
			if ((board[5][5][0] != 0) && (board[5][5][1] == n)) {
				if ((board[5][6][0] != 0) && (board[5][6][1] == n)) {
					winner = n;
				}
			}
		}
		else if ((board[4][3][0] != 0) && (board[4][3][1] == n)) {
			if ((board[3][3][0] != 0) && (board[3][3][1] == n)) {
				if ((board[2][3][0] != 0) && (board[2][3][1] == n)) {
					winner = n;
				}
			}
		}
		else if ((board[4][2][0] != 0) && (board[4][2][1] == n)) {
			if ((board[3][1][0] != 0) && (board[3][1][1] == n)) {
				if ((board[2][0][0] != 0) && (board[2][0][1] == n)) {
					winner = n;
				}
			}
		}
		else if ((board[4][4][0] != 0) && (board[4][4][1] == n)) {
			if ((board[3][5][0] != 0) && (board[3][5][1] == n)) {
				if ((board[2][6][0] != 0) && (board[2][6][1] == n)) {
					winner = n;
				}
			}
		}
	}
	
	if ((board[5][4][0] != 0) && (board[5][4][1] == n)) {
		if ((board[4][3][0] != 0) && (board[4][3][1] == n)) {
			if ((board[3][2][0] != 0) && (board[3][2][1] == n)) {
				if ((board[2][1][0] != 0) && (board[2][1][1] == n)) {
					winner = n;
				}
			}
		}
		else if ((board[4][4][0] != 0) && (board[4][4][1] == n)) {
			if ((board[3][4][0] != 0) && (board[3][4][1] == n)) {
				if ((board[2][4][0] != 0) && (board[2][4][1] == n)) {
					winner = n;
				}
			}
		}
	}
	
	if ((board[5][5][0] != 0) && (board[5][5][1] == n)) {
		if ((board[4][4][0] != 0) && (board[4][4][1] == n)) {
			if ((board[3][3][0] != 0) && (board[3][3][1] == n)) {
				if ((board[2][2][0] != 0) && (board[2][2][1] == n)) {
					winner = n;
				}
			}
		}
		else if ((board[4][5][0] != 0) && (board[4][5][1] == n)) {
			if ((board[3][5][0] != 0) && (board[3][5][1] == n)) {
				if ((board[2][5][0] != 0) && (board[2][5][1] == n)) {
					winner = n;
				}
			}
		}
	}
	
	if ((board[5][6][0] != 0) && (board[5][6][1] == n)) {
		if ((board[4][5][0] != 0) && (board[4][5][1] == n)) {
			if ((board[3][4][0] != 0) && (board[3][4][1] == n)) {
				if ((board[2][3][0] != 0) && (board[2][3][1] == n)) {
					winner = n;
				}
			}
		}
		else if ((board[4][6][0] != 0) && (board[4][6][1] == n)) {
			if ((board[3][6][0] != 0) && (board[3][6][1] == n)) {
				if ((board[2][6][0] != 0) && (board[2][6][1] == n)) {
					winner = n;
				}
			}
		}
	}
	
	if ((board[4][0][0] != 0) && (board[4][0][1] == n)) {
		if ((board[4][1][0] != 0) && (board[4][1][1] == n)) {
			if ((board[4][2][0] != 0) && (board[4][2][1] == n)) {
				if ((board[4][3][0] != 0) && (board[4][3][1] == n)) {
					winner = n;
				}
			}
		}
		else if ((board[3][0][0] != 0) && (board[3][0][1] == n)) {
			if ((board[2][0][0] != 0) && (board[2][0][1] == n)) {
				if ((board[1][0][0] != 0) && (board[1][0][1] == n)) {
					winner = n;
				}
			}
		}
		else if ((board[3][1][0] != 0) && (board[3][1][1] == n)) {
			if ((board[2][2][0] != 0) && (board[2][2][1] == n)) {
				if ((board[1][3][0] != 0) && (board[1][3][1] == n)) {
					winner = n;
				}
			}
		}
	}
	
	if ((board[4][1][0] != 0) && (board[4][1][1] == n)) {
		if ((board[4][2][0] != 0) && (board[4][2][1] == n)) {
			if ((board[4][3][0] != 0) && (board[4][3][1] == n)) {
				if ((board[4][4][0] != 0) && (board[4][4][1] == n)) {
					winner = n;
				}
			}
		}
		else if ((board[3][1][0] != 0) && (board[3][1][1] == n)) {
			if ((board[2][1][0] != 0) && (board[2][1][1] == n)) {
				if ((board[1][1][0] != 0) && (board[1][1][1] == n)) {
					winner = n;
				}
			}
		}
		else if ((board[3][2][0] != 0) && (board[3][2][1] == n)) {
			if ((board[2][3][0] != 0) && (board[2][3][1] == n)) {
				if ((board[1][4][0] != 0) && (board[1][4][1] == n)) {
					winner = n;
				}
			}
		}
	}
	
	if ((board[4][2][0] != 0) && (board[4][2][1] == n)) {
		if ((board[4][3][0] != 0) && (board[4][3][1] == n)) {
			if ((board[4][4][0] != 0) && (board[4][4][1] == n)) {
				if ((board[4][5][0] != 0) && (board[4][5][1] == n)) {
					winner = n;
				}
			}
		}
		else if ((board[3][2][0] != 0) && (board[3][2][1] == n)) {
			if ((board[2][2][0] != 0) && (board[2][2][1] == n)) {
				if ((board[1][2][0] != 0) && (board[1][2][1] == n)) {
					winner = n;
				}
			}
		}
		else if ((board[3][3][0] != 0) && (board[3][3][1] == n)) {
			if ((board[2][4][0] != 0) && (board[2][4][1] == n)) {
				if ((board[1][5][0] != 0) && (board[1][5][1] == n)) {
					winner = n;
				}
			}
		}	
	}
		
	if ((board[4][3][0] != 0) && (board[4][3][1] == n)) {
		if ((board[4][4][0] != 0) && (board[4][4][1] == n)) {
			if ((board[4][5][0] != 0) && (board[4][5][1] == n)) {
				if ((board[4][6][0] != 0) && (board[4][6][1] == n)) {
					winner = n;
				}
			}
		}
		else if ((board[3][3][0] != 0) && (board[3][3][1] == n)) {
			if ((board[2][3][0] != 0) && (board[2][3][1] == n)) {
				if ((board[1][3][0] != 0) && (board[1][3][1] == n)) {
					winner = n;
				}
			}
		}
		else if ((board[3][2][0] != 0) && (board[3][2][1] == n)) {
			if ((board[2][1][0] != 0) && (board[2][1][1] == n)) {
				if ((board[1][0][0] != 0) && (board[1][0][1] == n)) {
					winner = n;
				}
			}
		}
		else if ((board[3][4][0] != 0) && (board[3][4][1] == n)) {
			if ((board[2][5][0] != 0) && (board[2][5][1] == n)) {
				if ((board[1][6][0] != 0) && (board[1][6][1] == n)) {
					winner = n;
				}
			}
		}
	}
	
	if ((board[4][4][0] != 0) && (board[4][4][1] == n)) {
		if ((board[3][3][0] != 0) && (board[3][3][1] == n)) {
			if ((board[2][2][0] != 0) && (board[2][2][1] == n)) {
				if ((board[1][1][0] != 0) && (board[1][1][1] == n)) {
					winner = n;
				}
			}
		}
		else if ((board[3][4][0] != 0) && (board[3][4][1] == n)) {
			if ((board[2][4][0] != 0) && (board[2][4][1] == n)) {
				if ((board[1][4][0] != 0) && (board[1][4][1] == n)) {
					winner = n;
				}
			}
		}
	}
	
	if ((board[4][5][0] != 0) && (board[4][5][1] == n)) {
		if ((board[3][4][0] != 0) && (board[3][4][1] == n)) {
			if ((board[2][3][0] != 0) && (board[2][3][1] == n)) {
				if ((board[1][2][0] != 0) && (board[1][2][1] == n)) {
					winner = n;
				}
			}
		}
		else if ((board[3][5][0] != 0) && (board[3][5][1] == n)) {
			if ((board[2][5][0] != 0) && (board[2][5][1] == n)) {
				if ((board[1][5][0] != 0) && (board[1][5][1] == n)) {
					winner = n;
				}
			}
		}
	}
	
	if ((board[4][6][0] != 0) && (board[4][6][1] == n)) {
		if ((board[3][5][0] != 0) && (board[3][5][1] == n)) {
			if ((board[2][4][0] != 0) && (board[2][4][1] == n)) {
				if ((board[1][3][0] != 0) && (board[1][3][1] == n)) {
					winner = n;
				}
			}
		}
		else if ((board[3][6][0] != 0) && (board[3][6][1] == n)) {
			if ((board[2][6][0] != 0) && (board[2][6][1] == n)) {
				if ((board[1][6][0] != 0) && (board[1][6][1] == n)) {
					winner = n;
				}
			}
		}
	}
	
	
	if ((board[3][0][0] != 0) && (board[3][0][1] == n)) {
		if ((board[3][1][0] != 0) && (board[3][1][1] == n)) {
			if ((board[3][2][0] != 0) && (board[3][2][1] == n)) {
				if ((board[3][3][0] != 0) && (board[3][3][1] == n)) {
					winner = n;
				}
			}
		}
		else if ((board[2][0][0] != 0) && (board[2][0][1] == n)) {
			if ((board[1][0][0] != 0) && (board[1][0][1] == n)) {
				if ((board[0][0][0] != 0) && (board[0][0][1] == n)) {
					winner = n;
				}
			}
		}
		else if ((board[2][1][0] != 0) && (board[2][1][1] == n)) {
			if ((board[1][2][0] != 0) && (board[1][2][1] == n)) {
				if ((board[0][3][0] != 0) && (board[0][3][1] == n)) {
					winner = n;
				}
			}
		}
	}
	
	if ((board[3][1][0] != 0) && (board[3][1][1] == n)) {
		if ((board[3][2][0] != 0) && (board[3][2][1] == n)) {
			if ((board[3][3][0] != 0) && (board[3][3][1] == n)) {
				if ((board[3][4][0] != 0) && (board[3][4][1] == n)) {
					winner = n;
				}
			}
		}
		else if ((board[2][1][0] != 0) && (board[2][1][1] == n)) {
			if ((board[1][1][0] != 0) && (board[1][1][1] == n)) {
				if ((board[0][1][0] != 0) && (board[0][1][1] == n)) {
					winner = n;
				}
			}
		}
		else if ((board[2][2][0] != 0) && (board[2][2][1] == n)) {
			if ((board[1][3][0] != 0) && (board[1][3][1] == n)) {
				if ((board[0][4][0] != 0) && (board[0][4][1] == n)) {
					winner = n;
				}
			}
		}
	}
	
	if ((board[3][2][0] != 0) && (board[3][2][1] == n)) {
		if ((board[3][3][0] != 0) && (board[3][3][1] == n)) {
			if ((board[3][4][0] != 0) && (board[3][4][1] == n)) {
				if ((board[3][5][0] != 0) && (board[3][5][1] == n)) {
					winner = n;
				}
			}
		}
		else if ((board[2][2][0] != 0) && (board[2][2][1] == n)) {
			if ((board[1][2][0] != 0) && (board[1][2][1] == n)) {
				if ((board[0][2][0] != 0) && (board[0][2][1] == n)) {
					winner = n;
				}
			}
		}
		else if ((board[2][3][0] != 0) && (board[2][3][1] == n)) {
			if ((board[1][4][0] != 0) && (board[1][4][1] == n)) {
				if ((board[0][5][0] != 0) && (board[0][5][1] == n)) {
					winner = n;
				}
			}
		}	
	}
		
	if ((board[3][3][0] != 0) && (board[3][3][1] == n)) {
		if ((board[3][4][0] != 0) && (board[3][4][1] == n)) {
			if ((board[3][5][0] != 0) && (board[3][5][1] == n)) {
				if ((board[3][6][0] != 0) && (board[3][6][1] == n)) {
					winner = n;
				}
			}
		}
		else if ((board[2][3][0] != 0) && (board[2][3][1] == n)) {
			if ((board[1][3][0] != 0) && (board[1][3][1] == n)) {
				if ((board[0][3][0] != 0) && (board[0][3][1] == n)) {
					winner = n;
				}
			}
		}
		else if ((board[2][2][0] != 0) && (board[2][2][1] == n)) {
			if ((board[1][1][0] != 0) && (board[1][1][1] == n)) {
				if ((board[0][0][0] != 0) && (board[0][0][1] == n)) {
					winner = n;
				}
			}
		}
		else if ((board[2][4][0] != 0) && (board[2][4][1] == n)) {
			if ((board[1][5][0] != 0) && (board[1][5][1] == n)) {
				if ((board[0][6][0] != 0) && (board[0][6][1] == n)) {
					winner = n;
				}
			}
		}
	}
	
	if ((board[3][4][0] != 0) && (board[3][4][1] == n)) {
		if ((board[2][3][0] != 0) && (board[2][3][1] == n)) {
			if ((board[1][2][0] != 0) && (board[1][2][1] == n)) {
				if ((board[0][1][0] != 0) && (board[0][1][1] == n)) {
					winner = n;
				}
			}
		}
		else if ((board[2][4][0] != 0) && (board[2][4][1] == n)) {
			if ((board[1][4][0] != 0) && (board[1][4][1] == n)) {
				if ((board[0][4][0] != 0) && (board[0][4][1] == n)) {
					winner = n;
				}
			}
		}
	}
	
	if ((board[3][5][0] != 0) && (board[3][5][1] == n)) {
		if ((board[2][4][0] != 0) && (board[2][4][1] == n)) {
			if ((board[1][3][0] != 0) && (board[1][3][1] == n)) {
				if ((board[0][2][0] != 0) && (board[0][2][1] == n)) {
					winner = n;
				}
			}
		}
		else if ((board[2][5][0] != 0) && (board[2][5][1] == n)) {
			if ((board[1][5][0] != 0) && (board[1][5][1] == n)) {
				if ((board[0][5][0] != 0) && (board[0][5][1] == n)) {
					winner = n;
				}
			}
		}
	}
	
	if ((board[3][6][0] != 0) && (board[3][6][1] == n)) {
		if ((board[2][5][0] != 0) && (board[2][5][1] == n)) {
			if ((board[1][4][0] != 0) && (board[1][4][1] == n)) {
				if ((board[0][3][0] != 0) && (board[0][3][1] == n)) {
					winner = n;
				}
			}
		}
		else if ((board[2][6][0] != 0) && (board[2][6][1] == n)) {
			if ((board[1][6][0] != 0) && (board[1][6][1] == n)) {
				if ((board[0][6][0] != 0) && (board[0][6][1] == n)) {
					winner = n;
				}
			}
		}
	}
	
	if ((board[2][0][0] != 0) && (board[2][0][1] == n)) {
		if ((board[2][1][0] != 0) && (board[2][1][1] == n)) {
			if ((board[2][2][0] != 0) && (board[2][2][1] == n)) {
				if ((board[2][3][0] != 0) && (board[2][3][1] == n)) {
					winner = n;
				}
			}
		}
	}
	
	if ((board[2][1][0] != 0) && (board[2][1][1] == n)) {
		if ((board[2][2][0] != 0) && (board[2][2][1] == n)) {
			if ((board[2][3][0] != 0) && (board[2][3][1] == n)) {
				if ((board[2][4][0] != 0) && (board[2][4][1] == n)) {
					winner = n;
				}
			}
		}
	}
	
	if ((board[2][2][0] != 0) && (board[2][2][1] == n)) {
		if ((board[2][3][0] != 0) && (board[2][3][1] == n)) {
			if ((board[2][4][0] != 0) && (board[2][4][1] == n)) {
				if ((board[2][5][0] != 0) && (board[2][5][1] == n)) {
					winner = n;
				}
			}
		}
	}
	
	if ((board[2][3][0] != 0) && (board[2][3][1] == n)) {
		if ((board[2][4][0] != 0) && (board[2][4][1] == n)) {
			if ((board[2][5][0] != 0) && (board[2][5][1] == n)) {
				if ((board[2][6][0] != 0) && (board[2][6][1] == n)) {
					winner = n;
				}
			}
		}
	}
	
	if ((board[1][0][0] != 0) && (board[1][0][1] == n)) {
		if ((board[1][1][0] != 0) && (board[1][1][1] == n)) {
			if ((board[1][2][0] != 0) && (board[1][2][1] == n)) {
				if ((board[1][3][0] != 0) && (board[1][3][1] == n)) {
					winner = n;
				}
			}
		}
	}
	
	if ((board[1][1][0] != 0) && (board[1][1][1] == n)) {
		if ((board[1][2][0] != 0) && (board[1][2][1] == n)) {
			if ((board[1][3][0] != 0) && (board[1][3][1] == n)) {
				if ((board[1][4][0] != 0) && (board[1][4][1] == n)) {
					winner = n;
				}
			}
		}
	}
	
	if ((board[1][2][0] != 0) && (board[1][2][1] == n)) {
		if ((board[1][3][0] != 0) && (board[1][3][1] == n)) {
			if ((board[1][4][0] != 0) && (board[1][4][1] == n)) {
				if ((board[1][5][0] != 0) && (board[1][5][1] == n)) {
					winner = n;
				}
			}
		}
	}
	
	if ((board[1][3][0] != 0) && (board[1][3][1] == n)) {
		if ((board[1][4][0] != 0) && (board[1][4][1] == n)) {
			if ((board[1][5][0] != 0) && (board[1][5][1] == n)) {
				if ((board[1][6][0] != 0) && (board[1][6][1] == n)) {
					winner = n;
				}
			}
		}
	}
	
	if ((board[0][0][0] != 0) && (board[0][0][1] == n)) {
		if ((board[0][1][0] != 0) && (board[0][1][1] == n)) {
			if ((board[0][2][0] != 0) && (board[0][2][1] == n)) {
				if ((board[0][3][0] != 0) && (board[0][3][1] == n)) {
					winner = n;
				}
			}
		}
	}
	
	if ((board[0][1][0] != 0) && (board[0][1][1] == n)) {
		if ((board[0][2][0] != 0) && (board[0][2][1] == n)) {
			if ((board[0][3][0] != 0) && (board[0][3][1] == n)) {
				if ((board[0][4][0] != 0) && (board[0][4][1] == n)) {
					winner = n;
				}
			}
		}
	}
	
	if ((board[0][2][0] != 0) && (board[0][2][1] == n)) {
		if ((board[0][3][0] != 0) && (board[0][3][1] == n)) {
			if ((board[0][4][0] != 0) && (board[0][4][1] == n)) {
				if ((board[0][5][0] != 0) && (board[0][5][1] == n)) {
					winner = n;
				}
			}
		}
	}
	
	if ((board[0][3][0] != 0) && (board[0][3][1] == n)) {
		if ((board[0][4][0] != 0) && (board[0][4][1] == n)) {
			if ((board[0][5][0] != 0) && (board[0][5][1] == n)) {
				if ((board[0][6][0] != 0) && (board[0][6][1] == n)) {
					winner = n;
				}
			}
		}
	}
	
	return winner;
}




#endif /* WINNER_CHECK */