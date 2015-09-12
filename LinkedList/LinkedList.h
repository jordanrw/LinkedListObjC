//
//  LinkedList.h
//  LinkedList
//
//  Created by Jordan White on 9/12/15.
//  Copyright (c) 2015 Two Beards and Fro. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Node.h"

@interface LinkedList : NSObject

@property (nonatomic, strong) Node *head;
@property (nonatomic, strong) Node *tail;
@property (nonatomic, strong) Node *current;

@property (assign) int size;

@end
