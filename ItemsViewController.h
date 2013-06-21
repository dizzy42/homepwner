//
//  ItemsViewController.h
//  Homepwner
//
//  Created by Timothy Payton on 6/10/13.
//  Copyright (c) 2013 Timothy Payton. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DetailViewController.h"

@interface ItemsViewController : UITableViewController <UIPopoverControllerDelegate>
{
    UIPopoverController *imagePopover;
}

- (IBAction)addNewItem:(id)sender;

@end
