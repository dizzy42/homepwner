//
//  BNRItemStore.h
//  Homepwner
//
//  Created by Timothy Payton on 6/10/13.
//  Copyright (c) 2013 Timothy Payton. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BNRItem;

@interface BNRItemStore : NSObject
{
    NSMutableArray *allItems;
}

+ (BNRItemStore *)sharedStore;

- (NSArray *)allItems;
- (BNRItem *)createItem;
- (void)removeItem:(BNRItem *)p;
- (void)moveItemAtIndex:(int)from toIndex:(int)to;
- (NSString *)itemArchivePath;
- (BOOL)saveChanges;

@end
