//
//  HomepwnerItemCell.m
//  Homepwner
//
//  Created by Timothy Payton on 6/20/13.
//  Copyright (c) 2013 Timothy Payton. All rights reserved.
//

#import "HomepwnerItemCell.h"

@implementation HomepwnerItemCell

@synthesize controller, tableView;

- (IBAction)showImage:(id)sender
{
    NSString *selector = NSStringFromSelector(_cmd);
    selector = [selector stringByAppendingString:@"atIndexPath:"];
    
    SEL newSelector = NSSelectorFromString(selector);
    
    NSIndexPath *indexPath = [[self tableView] indexPathForCell:self];
    if (indexPath) {
        if ([[self controller] respondsToSelector:newSelector]) {
            [[self controller] performSelector:newSelector withObject:sender withObject:indexPath];
        }
    }
}
@end
