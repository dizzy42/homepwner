//
//  DetailViewController.h
//  Homepwner
//
//  Created by Timothy Payton on 6/11/13.
//  Copyright (c) 2013 Timothy Payton. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BNRItem;

@interface DetailViewController : UIViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, UITextFieldDelegate, UIPopoverControllerDelegate>
{
    __weak IBOutlet UITextField *serialNumberField;
    __weak IBOutlet UITextField *nameField;
    __weak IBOutlet UITextField *valueField;
    __weak IBOutlet UILabel *dateLabel;
    __weak IBOutlet UIImageView *imageView;
    
    UIPopoverController *imagePickerPopover;
}

@property (nonatomic, strong) BNRItem *item;
@property (nonatomic, copy) void (^dismissBlock)(void);

- (id)initForNewItem:(BOOL)isNew;
- (IBAction)backgroundTapped:(id)sender;
- (IBAction)takePicture:(id)sender;
@end
