//
//  Node.h
//  LinkedList
//
//  Created by Jordan White on 9/12/15.
//  Copyright (c) 2015 Two Beards and Fro. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Node : NSObject

@property (nonatomic, strong) NSObject *data;
@property (nonatomic, strong) Node *next;

- (instancetype)initWith:(NSObject *) data andNextNode:(Node *)node;
- (instancetype)initWithNextNode:(Node *)node;

@end