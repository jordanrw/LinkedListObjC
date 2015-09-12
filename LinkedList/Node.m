//
//  Node.m
//  LinkedList
//
//  Created by Jordan White on 9/12/15.
//  Copyright (c) 2015 Two Beards and Fro. All rights reserved.
//

#import "Node.h"

@implementation Node

- (instancetype)initWith:(NSObject *) data andNextNode:(Node *)node {
    self = [super init];
    if (self) {
        self.data = data;
        self.next = node;
    }
    return self;
}

- (instancetype)initWithNextNode:(Node *)node {
    self = [super init];
    if (self) {
        self.next = node;
    }
    return self;
}

@end