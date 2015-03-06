Feature: Create fancy nodes
  Tests the simple creation of fancy nodes
  Also checks if the "IEF disabled" patch is applied. (https://www.drupal.org/node/1545896#comment-9414387)

  @api @javascript
  Scenario: Create fresh node as administrator, do basic checks and test if IEF is disabled
    Given I am logged in as a user with the "administrator" role
    And I am on "/en/node/add/panelized-page"

    # Initial node creation
    Then I should see "Create Panelized Page"
    And I should see "You need to save this page first in order to add entities."
    When I fill in the following:
      | title_field[und][0][value]    | Testnode #1            |
      | field_headline[und][0][value] | Testnode #1 - Headline |
    And I press "op"

    # Test first output, uncommented since this does not work with the noty plugin
#    Then I should see the success message containing "Panelized Page Testnode #1 has been created."

    # Edit the node the second time
    And I edit the current node
    Then I should see "Edit Panelized Page Testnode #1"
    And I should not see "You need to save this page first in order to add entities."

    # Delete node to keep the db clean
    When I press "edit-delete"
    And I press "edit-submit"

  @api @javascript
  Scenario: Creates a fancy page with sections containing text content elements.
    Given I am logged in as a user with the "administrator" role
    When I start creating a fresh "panelized_page" node named "Test Fancy Page with text elements"
    Then I add a new "flexible" entity
    Then I add a new "text" entity
    Then I fill WYSIWYG field "ref_content_elements" with "This is a test."

    When I submit the "ref_content_elements" ief form
    And the preview for "ref_content_elements" in row "1" should contain "This is a test."

    When I submit the "ref_layout_element" ief form
    And the preview for "ref_layout_element" in row "1" should contain "This is a test."

    When I press "edit-submit"
    Then should see "This is a test."

    Then I delete the current node

  @api @javascript
  Scenario: Creates a fancy page with sections containing picture content elements.
    Given I am logged in as a user with the "administrator" role
    When I start creating a fresh "panelized_page" node named "Test Fancy Page with picture elements"
    Then I add a new "flexible" entity
    Then I add a new "picture" entity
    Then I attach the file "example-image.jpg" to file field "image"
    And I fill in Drupal field "link" with "http://www.google.com"

    When I submit the "ref_content_elements" ief form
    And the preview for "ref_content_elements" in row "1" should contain "Link: http://www.google.com"
    And the preview for "ref_content_elements" in row "1" should contain an "img[src*=example-image]" element

    When I submit the "ref_layout_element" ief form
    And the preview for "ref_layout_element" in row "1" should contain an "picture img[srcset*=example-image]" element

    When I press "edit-submit"
    Then I should see an "picture img[srcset*=example-image]" element

    Then I delete the current node